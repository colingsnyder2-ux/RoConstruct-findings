// roc 2008-06 007d9e80  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9e80
//
// 007d9e80  b9d0c99700           mov ecx, 0x97c9d0
// 007d9e85  e9c6fac2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9e80 { void m(); };
extern T_func_007d9e80 G1_func_007d9e80;
void func_007d9e80()
{
    G1_func_007d9e80.m();
}
