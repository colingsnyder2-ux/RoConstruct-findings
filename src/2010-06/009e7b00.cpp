// roc 2010-06 009e7b00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b00
//
// 009e7b00  b93812c200           mov ecx, 0xc21238
// 009e7b05  e966eabaff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e7b00 { void m(); };
extern T_func_009e7b00 G1_func_009e7b00;
void func_009e7b00()
{
    G1_func_009e7b00.m();
}
