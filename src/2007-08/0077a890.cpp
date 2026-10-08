// roc 2007-08 0077a890  unit: seg_00770000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a890
//
// 0077a890  b958348c00           mov ecx, 0x8c3458
// 0077a895  e976cdc9ff           jmp 0x417610
// auto-matched from its assembly shape

struct T_func_0077a890 { void m(); };
extern T_func_0077a890 G1_func_0077a890;
void func_0077a890()
{
    G1_func_0077a890.m();
}
