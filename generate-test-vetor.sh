#!/bin/bash
n=$((RANDOM % 10 + 1))
echo $n > test1-vetor.in
for i in $(seq $n); do echo -n "$((RANDOM % 100)) " >> test1-vetor.in; done
