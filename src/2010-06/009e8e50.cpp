// roc 2010-06 009e8e50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8e50
//
// 009e8e50  b96042c200           mov ecx, 0xc24260
// 009e8e55  e9f6c0a3ff           jmp 0x424f50
// auto-matched from its assembly shape

struct T_func_009e8e50 { void m(); };
extern T_func_009e8e50 G1_func_009e8e50;
void func_009e8e50()
{
    G1_func_009e8e50.m();
}
