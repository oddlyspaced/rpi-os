## Friday - 19 Feb '22
- aarch64-linux-gnu-gcc <- Cross Compiler
- Currently gettig := makefile error: aarch64-linux-gnu-objcopy: error: the input file 'build/kernel8.elf' has no sections
- our kernel is going to run as 64 bit
- we have no access to standard C library
- c -> C Files
- s -> assembly
- ld -> linker script
- h -> headers
- minimal assembly is needed to load up and set up things and to pass control over to our C files
- PBASE = Base Peripheral Address

## Saturday - 20 Feb '22
