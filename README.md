# GeneFind
## Purpose
GeneFind is a command-line bioinformatics design tool written in python 3.x. GeneFind searches the designspace of all possible proteins of finite length, tests them, and outputs a DNA sequence corresponding to a protein which suffices a fitness function specified by you.

The overall purpose of GeneFind is to reduce the cognitive labour required to research synthetic biology. GeneFind translates a cogntively limited problem, protein design, to a computational problem. This should reduce total turnaround time for experimenting with synthetic genes.

## Running
Run with: 

```py
python3 genefind.py [sequence]
```
sequence must be a string consisting of either 'a' 't' 'g' or 'c' (total string length Must be divisible by three)

## Collaborators
People who know Python and know high school chemistry and who are interested are welcome to contact me.

## Future Features
• A parser which generates .gro file for the GROMACS molecular dynamics simulator.

• A result parser which determines the vector changes from the before and after state.

• A library of stable ammino acids

• A sample fitness function definition prototype

• Module that can parse the fitness function for the machine learning module.
