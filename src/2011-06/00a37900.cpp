// roc 2011-06 00a37900  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37900
//
// 00a37900  b9981ccc00           mov ecx, 0xcc1c98
// 00a37905  e936629dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37900 { void m(); };
extern T_func_00a37900 G1_func_00a37900;
void func_00a37900()
{
    G1_func_00a37900.m();
}
