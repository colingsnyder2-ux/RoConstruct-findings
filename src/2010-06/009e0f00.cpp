// roc 2010-06 009e0f00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f00
//
// 009e0f00  b90079c100           mov ecx, 0xc17900
// 009e0f05  e9c602bdff           jmp 0x5b11d0
// auto-matched from its assembly shape

struct T_func_009e0f00 { void m(); };
extern T_func_009e0f00 G1_func_009e0f00;
void func_009e0f00()
{
    G1_func_009e0f00.m();
}
