// roc 2008-06 007d6020  unit: seg_007d0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007d6020
//
// 007d6020  b97ca49700           mov ecx, 0x97a47c
// 007d6025  e92639c3ff           jmp 0x409950
// auto-matched from its assembly shape

struct T_func_007d6020 { void m(); };
extern T_func_007d6020 G1_func_007d6020;
void func_007d6020()
{
    G1_func_007d6020.m();
}
