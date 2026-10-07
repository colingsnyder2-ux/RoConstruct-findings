// roc 2010-06 009e3c00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3c00
//
// 009e3c00  b9f0b5c100           mov ecx, 0xc1b5f0
// 009e3c05  e96629bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e3c00 { void m(); };
extern T_func_009e3c00 G1_func_009e3c00;
void func_009e3c00()
{
    G1_func_009e3c00.m();
}
