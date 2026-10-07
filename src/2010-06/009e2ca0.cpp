// roc 2010-06 009e2ca0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2ca0
//
// 009e2ca0  b9509cc100           mov ecx, 0xc19c50
// 009e2ca5  e99618c2ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e2ca0 { void m(); };
extern T_func_009e2ca0 G1_func_009e2ca0;
void func_009e2ca0()
{
    G1_func_009e2ca0.m();
}
