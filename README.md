# High-Performance-Trading
Researching high-performance and multithreaded technologies in C++ using libraries such as OpenMP, C++ AMP, and MPI

## Topic 1: SIMD (Single Instruction Multiple Data)
- Motivation: Processing several pieces of data at once to optimize at the CPU-level
- SIMD allows vectorized operations using large registers
- The code in the SIMD directory follows 3 examples of SIMD using inline assembly, intrinsics (C++ wrappers), and compiler vectorizations

## Topic 2: Open Multi-Processing (OpenMP)
- Standard for decorating code for multi-processing
  - Data parallelism (parallelize loops)
  - Task parallelism (run blocks of code in seperate threads)
- **Imperative Parallelization**: seperate data/code into several parts, create threads for each part and run computation on it, potential issues with data sharing
- **Declarative Parallelization**: leave existing sequential code as-is, decorate code with compiler tags (ex. parallelize 'this'), allow compiler to split code into threads
