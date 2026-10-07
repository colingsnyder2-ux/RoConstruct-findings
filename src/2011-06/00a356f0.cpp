// roc 2011-06 00a356f0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a356f0
//
// 00a356f0  b938ddcb00           mov ecx, 0xcbdd38
// 00a356f5  e9166ea7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a356f0 { void m(); };
extern T_func_00a356f0 G1_func_00a356f0;
void func_00a356f0()
{
    G1_func_00a356f0.m();
}
