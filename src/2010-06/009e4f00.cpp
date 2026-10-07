// roc 2010-06 009e4f00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4f00
//
// 009e4f00  b910d0c100           mov ecx, 0xc1d010
// 009e4f05  e936f6c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e4f00 { void m(); };
extern T_func_009e4f00 G1_func_009e4f00;
void func_009e4f00()
{
    G1_func_009e4f00.m();
}
