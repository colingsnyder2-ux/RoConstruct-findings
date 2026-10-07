// roc 2011-06 00a32590  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a32590
//
// 00a32590  b90064cb00           mov ecx, 0xcb6400
// 00a32595  e9769fa7ff           jmp 0x4ac510
// auto-matched from its assembly shape

struct T_func_00a32590 { void m(); };
extern T_func_00a32590 G1_func_00a32590;
void func_00a32590()
{
    G1_func_00a32590.m();
}
