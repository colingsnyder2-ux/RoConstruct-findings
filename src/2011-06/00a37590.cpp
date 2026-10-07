// roc 2011-06 00a37590  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37590
//
// 00a37590  b9004bcc00           mov ecx, 0xcc4b00
// 00a37595  e9a6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37590 { void m(); };
extern T_func_00a37590 G1_func_00a37590;
void func_00a37590()
{
    G1_func_00a37590.m();
}
