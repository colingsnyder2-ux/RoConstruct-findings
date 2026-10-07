// roc 2010-06 009e8e60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e60
//
// 009e8e60  b9c843c200           mov ecx, 0xc243c8
// 009e8e65  e92679dbff           jmp 0x7a0790
// auto-matched from its assembly shape

struct T_func_009e8e60 { void m(); };
extern T_func_009e8e60 G1_func_009e8e60;
void func_009e8e60()
{
    G1_func_009e8e60.m();
}
