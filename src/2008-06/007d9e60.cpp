// roc 2008-06 007d9e60  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9e60
//
// 007d9e60  b938c69700           mov ecx, 0x97c638
// 007d9e65  e9e6fac2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9e60 { void m(); };
extern T_func_007d9e60 G1_func_007d9e60;
void func_007d9e60()
{
    G1_func_007d9e60.m();
}
