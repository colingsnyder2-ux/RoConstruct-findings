// roc 2011-06 00a37a00  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37a00
//
// 00a37a00  b9180fcc00           mov ecx, 0xcc0f18
// 00a37a05  e936619dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37a00 { void m(); };
extern T_func_00a37a00 G1_func_00a37a00;
void func_00a37a00()
{
    G1_func_00a37a00.m();
}
