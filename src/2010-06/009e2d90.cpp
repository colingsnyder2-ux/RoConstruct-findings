// roc 2010-06 009e2d90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2d90
//
// 009e2d90  b9c89fc100           mov ecx, 0xc19fc8
// 009e2d95  e9d637bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e2d90 { void m(); };
extern T_func_009e2d90 G1_func_009e2d90;
void func_009e2d90()
{
    G1_func_009e2d90.m();
}
