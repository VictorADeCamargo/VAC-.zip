#!/bin/bash
n=2
echo $n > test1-matriz.in

# matriz A
for ((i=0; i<n*n; i++)); do echo $((RANDOM % 10)); done >> test1-matriz.in

# matriz B
for ((i=0; i<n*n; i++)); do echo $((RANDOM % 10)); done >> test1-matriz.in

# operação aleatória
echo a >> test1-matriz.in
