
;; Added by Package.el.  This must come before configurations of
;; installed packages.  Don't delete this line.  If you don't want it,
;; just comment it out by adding a semicolon to the start of the line.
;; You may delete these explanatory comments.
(package-initialize)

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(column-number-mode t)
 '(display-battery-mode t)
 '(display-time-mode t)
 '(org-enforce-todo-dependencies t)
 '(package-selected-packages
   (quote
	(magit company-c-headers flycheck flycheck-rtags helm helm-bind-key helm-c-moccur helm-c-yasnippet helm-git helm-git-grep helm-gitlab helm-helm-commands helm-lines helm-ls-git helm-org-rifle projectile rtags 2048-game academic-phrases achievements auto-complete auto-complete-c-headers call-graph circe yasnippet volatile-highlights undo-tree smartparens smart-comment org clean-buffers clean-aindent-mode)))
 '(require-final-newline nil)
 '(shift-select-mode t)
 '(show-paren-mode t)
 '(show-trailing-whitespace t)
 '(size-indication-mode t)
 '(tab-width 4))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )

;;Global
(add-to-list 'load-path "~/.emacs.d/lisp")
      (autoload 'gtags-mode "gtags" "" t)


(global-set-key (kbd "<f9>") 'compile)
(global-set-key (kbd "C-O") 'left-word)
;;(global-set-key (kbd "C-RIGHT") 'right-word)
(global-set-key (kbd "<f2>") 'org-insert-heading)
(global-set-key (kbd "<f3>") 'org-demote-subtree)
(global-set-key (kbd "<f4>") 'org-promote-subtree)
(global-set-key (kbd "C-c C-c") 'comment-or-uncomment-region)


(require 'package)
(add-to-list 'package-archives
	     '("melpa" . "http://melpa.milkbox.net/packages/") t)

;; Package: volatile-highlights
;;(require 'volatile-highlights

;; Package: smartparens
(require 'smartparens-config)
(setq sp-base-key-bindings 'paredit)
(setq sp-autoskip-closing-pair 'always)
(setq sp-hybrid-kill-entire-symbol nil)
(sp-use-paredit-bindings)

;; Package: yasnippet
(add-to-list 'load-path
	     "~/.emacs.d/plugins/yasnippet")
(require 'yasnippet)
(yas-global-mode 1)

