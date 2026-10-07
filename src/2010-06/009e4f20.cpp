// roc 2010-06 009e4f20  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4f20
//
// 009e4f20  b968d9c100           mov ecx, 0xc1d968
// 009e4f25  e916f6c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e4f20 { void m(); };
extern T_func_009e4f20 G1_func_009e4f20;
void func_009e4f20()
{
    G1_func_009e4f20.m();
}
