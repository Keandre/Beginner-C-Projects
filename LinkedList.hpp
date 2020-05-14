template <class T>
struct node{
	T data;
	node* next;
	~node(){delete next; delete data;}
};
template <class T>

class list{
	node<T> *head,*tail;
	unsigned int length = 0;
	public:
	list(){
		head = nullptr;
		tail = nullptr;
	}
	~list(){
		delete head;
		delete tail;
		delete length;
	}
	void display(){
		node<T> *temp = head;
		while(temp->next != nullptr){
			std::cout<<temp->data<<" | ";
			temp = temp->next;
		}
		std::cout<<"\n";
	}
	void insertNode(const unsigned int pos, const T data){
		node<T>* temp = new node<T>;
		temp->data = data;
		if(head == nullptr || length == 0){
			head = temp;
			tail = temp;
		}
		else if (pos == length){
			tail->next = temp;
			tail = temp;
		}
		
		else if(pos == 0){
			temp->next = head;
			head = temp;
		}
		else{
			node<T>* traverse = head;
			for(int i = 0; i < pos - 1; i++){
				traverse = traverse->next;
			}  
			temp->next = traverse->next;
			traverse->next = temp;
		}
		length++;
	}
	void insertNode(const T data){
		node<T>* temp = new node<T>;
		temp->data = data;
		if(head==nullptr){
			head = temp;
			tail = temp;
		}
		else{
			tail->next = temp;
			tail = temp;
		}
		length++;
	}
	void deleteNode(const int pos){
		node<T>* temp = new node<T>;
		temp = head;
		if(pos == 0){
			head = head->next;
			delete temp;
		}
		else if(pos == length){
			while(temp->next->next != nullptr) temp = temp->next;
			node<T>* toDelete = temp->next;
			tail = temp;
			delete toDelete;
		}
		else{
			for(int i = 0; i < pos - 1; i++){
				temp = temp->next;
			}
			node<T> *toDelete = temp->next;
			temp->next = temp->next->next;
			delete toDelete;
		}
		length--;
	}
	T getData(const unsigned int pos){
		if(pos == 0) return head->data;
		else if(pos == length) return tail->data;
		else{
			node<T> *temp = new node<T>;
			for(int i = 0; i < pos; i++) temp = temp->next;
			return temp->data;
		}
	}
};



