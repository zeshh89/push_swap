#!/bin/bash
for size in 5 100 500 1000
do
    echo "=== Probando con $size números ==="
    for i in {1..10}
    do
        ARG=$(seq 1 $size | shuf)
        MOVS=$(./push_swap $ARG | wc -l)
        RES=$(./push_swap $ARG | ./checker_linux $ARG)
        echo "Test $i: $RES en $MOVS movimientos"
    done
done

