// roc 2008-06 007d9e20  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d9e20
//
// 007d9e20  b9e8c89700           mov ecx, 0x97c8e8
// 007d9e25  e926fbc2ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d9e20 { void m(); };
extern T_func_007d9e20 G1_func_007d9e20;
void func_007d9e20()
{
    G1_func_007d9e20.m();
}
