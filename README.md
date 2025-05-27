# boxed-forth-benchmark
runing the node C and gforth code shows that boxed forth is suboptimal.
unlike C and Node gforth simply does not optimize boxed access.

we can see both boxed forth and node are bitten by -O0 gcc-13.
note that on O2 gcc just optimizes away the entire benchmark so its not intresting.