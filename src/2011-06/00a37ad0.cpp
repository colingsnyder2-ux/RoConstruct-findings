// roc 2011-06 00a37ad0  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37ad0
//
// 00a37ad0  b92004cc00           mov ecx, 0xcc0420
// 00a37ad5  e966609dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37ad0 { void m(); };
extern T_func_00a37ad0 G1_func_00a37ad0;
void func_00a37ad0()
{
    G1_func_00a37ad0.m();
}
