# Algorithmic Efficiency Comparison

## Raw execution results

```text
Naive algorithm result: 6252500
Naive algorithm time: 0.026435 seconds
Single-pass algorithm result: 2500
Single-pass algorithm time: 0.000011 seconds
Naive algorithm result: 6252500
Naive algorithm time: 0.026441 seconds
Single-pass algorithm result: 2500
Single-pass algorithm time: 0.000011 seconds
Naive algorithm result: 6252500
Naive algorithm time: 0.026437 seconds
Single-pass algorithm result: 2500
Single-pass algorithm time: 0.000011 seconds
```

## Average execution times

| Implementation | Average execution time |
|---|---:|
| Naive algorithm | 0.026438 seconds |
| Single-pass algorithm | 0.000011 seconds |

## Execution-time ratio

Naive average / single-pass average: **2403.45:1**

## Analysis

The naive implementation uses nested loops, giving it approximately
quadratic time complexity, O(n²). The single-pass implementation scans the
array once, giving it linear time complexity, O(n).

The naive implementation is therefore expected to take considerably longer.
Small differences between individual runs are normal because of operating
system scheduling, other processes using the CPU, and timer resolution. The
overall difference is consistent with the expected time complexities.
