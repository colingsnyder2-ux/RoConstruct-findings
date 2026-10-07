// roc 2010-06 009e8840  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8840
//
// 009e8840  b91825c200           mov ecx, 0xc22518
// 009e8845  e9068ad0ff           jmp 0x6f1250
// auto-matched from its assembly shape

struct T_func_009e8840 { void m(); };
extern T_func_009e8840 G1_func_009e8840;
void func_009e8840()
{
    G1_func_009e8840.m();
}
