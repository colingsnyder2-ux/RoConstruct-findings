// roc 2008-06 007d64e0  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d64e0
//
// 007d64e0  b990aa9700           mov ecx, 0x97aa90
// 007d64e5  e96634c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d64e0 { void m(); };
extern T_func_007d64e0 G1_func_007d64e0;
void func_007d64e0()
{
    G1_func_007d64e0.m();
}
