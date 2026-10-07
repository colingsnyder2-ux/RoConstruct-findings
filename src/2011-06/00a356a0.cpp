// roc 2011-06 00a356a0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a356a0
//
// 00a356a0  b928dccb00           mov ecx, 0xcbdc28
// 00a356a5  e9167aa7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a356a0 { void m(); };
extern T_func_00a356a0 G1_func_00a356a0;
void func_00a356a0()
{
    G1_func_00a356a0.m();
}
