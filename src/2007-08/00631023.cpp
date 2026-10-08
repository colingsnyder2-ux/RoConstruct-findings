// from server: 20% by colin
// roc 2007-08 00631023  unit: std::bad_alloc  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631023
//
// 00631023  33c0                 xor eax, eax
// 00631025  40                   inc eax
// 00631026  c3                   ret 

int func_00631023() {
    return 1;
}
