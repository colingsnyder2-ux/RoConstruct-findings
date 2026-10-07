// roc 2011-06 00a37650  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37650
//
// 00a37650  b9e040cc00           mov ecx, 0xcc40e0
// 00a37655  e9e6649dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37650 { void m(); };
extern T_func_00a37650 G1_func_00a37650;
void func_00a37650()
{
    G1_func_00a37650.m();
}
