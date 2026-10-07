// roc 2011-06 00a37570  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a37570
//
// 00a37570  b9b04ccc00           mov ecx, 0xcc4cb0
// 00a37575  e9c6659dff           jmp 0x40db40
// auto-matched from its assembly shape

struct T_func_00a37570 { void m(); };
extern T_func_00a37570 G1_func_00a37570;
void func_00a37570()
{
    G1_func_00a37570.m();
}
