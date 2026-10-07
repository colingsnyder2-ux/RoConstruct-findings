// roc 2011-06 00a34cc0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a34cc0
//
// 00a34cc0  b9a8adcb00           mov ecx, 0xcbada8
// 00a34cc5  e9968cb5ff           jmp 0x58d960
// auto-matched from its assembly shape

struct T_func_00a34cc0 { void m(); };
extern T_func_00a34cc0 G1_func_00a34cc0;
void func_00a34cc0()
{
    G1_func_00a34cc0.m();
}
