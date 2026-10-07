// roc 2011-06 00a34ca0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34ca0
//
// 00a34ca0  b9f8aecb00           mov ecx, 0xcbaef8
// 00a34ca5  e95692b5ff           jmp 0x58df00
// auto-matched from its assembly shape

struct T_func_00a34ca0 { void m(); };
extern T_func_00a34ca0 G1_func_00a34ca0;
void func_00a34ca0()
{
    G1_func_00a34ca0.m();
}
