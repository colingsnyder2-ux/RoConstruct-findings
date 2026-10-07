// roc 2010-06 009e8f00  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8f00
//
// 009e8f00  b9c454c200           mov ecx, 0xc254c4
// 009e8f05  e9b6f7e2ff           jmp 0x8186c0
// auto-matched from its assembly shape

struct T_func_009e8f00 { void m(); };
extern T_func_009e8f00 G1_func_009e8f00;
void func_009e8f00()
{
    G1_func_009e8f00.m();
}
