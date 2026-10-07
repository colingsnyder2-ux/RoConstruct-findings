// roc 2011-06 00a37350  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37350
//
// 00a37350  b96069cc00           mov ecx, 0xcc6960
// 00a37355  e9e6679dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37350 { void m(); };
extern T_func_00a37350 G1_func_00a37350;
void func_00a37350()
{
    G1_func_00a37350.m();
}
