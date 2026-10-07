// roc 2010-06 009e6c00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c00
//
// 009e6c00  b908fec100           mov ecx, 0xc1fe08
// 009e6c05  e966f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c00 { void m(); };
extern T_func_009e6c00 G1_func_009e6c00;
void func_009e6c00()
{
    G1_func_009e6c00.m();
}
