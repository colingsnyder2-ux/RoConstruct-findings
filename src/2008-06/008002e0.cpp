// roc 2008-06 008002e0  unit: seg_00800000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008002e0
//
// 008002e0  b9b8bc9700           mov ecx, 0x97bcb8
// 008002e5  e9f6ace0ff           jmp 0x60afe0
// auto-matched from its assembly shape

struct T_func_008002e0 { void m(); };
extern T_func_008002e0 G1_func_008002e0;
void func_008002e0()
{
    G1_func_008002e0.m();
}
