// roc 2010-06 009e8e70  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e70
//
// 009e8e70  b9d842c200           mov ecx, 0xc242d8
// 009e8e75  e95675dbff           jmp 0x7a03d0
// auto-matched from its assembly shape

struct T_func_009e8e70 { void m(); };
extern T_func_009e8e70 G1_func_009e8e70;
void func_009e8e70()
{
    G1_func_009e8e70.m();
}
