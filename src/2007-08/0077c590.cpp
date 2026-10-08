// roc 2007-08 0077c590  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c590
//
// 0077c590  b908788c00           mov ecx, 0x8c7808
// 0077c595  e926a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c590 { void m(); };
extern T_func_0077c590 G1_func_0077c590;
void func_0077c590()
{
    G1_func_0077c590.m();
}
