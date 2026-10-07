// roc 2011-06 00a3c890  unit: seg_00a30000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3c890
//
// 00a3c890  b9d00acd00           mov ecx, 0xcd0ad0
// 00a3c895  e92608a7ff           jmp 0x4ad0c0
// auto-matched from its assembly shape

struct T_func_00a3c890 { void m(); };
extern T_func_00a3c890 G1_func_00a3c890;
void func_00a3c890()
{
    G1_func_00a3c890.m();
}
