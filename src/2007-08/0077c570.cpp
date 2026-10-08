// roc 2007-08 0077c570  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c570
//
// 0077c570  b928798c00           mov ecx, 0x8c7928
// 0077c575  e946a7c9ff           jmp 0x416cc0
// auto-matched from its assembly shape

struct T_func_0077c570 { void m(); };
extern T_func_0077c570 G1_func_0077c570;
void func_0077c570()
{
    G1_func_0077c570.m();
}
