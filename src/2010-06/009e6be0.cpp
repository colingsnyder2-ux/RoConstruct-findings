// roc 2010-06 009e6be0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6be0
//
// 009e6be0  b970ffc100           mov ecx, 0xc1ff70
// 009e6be5  e986f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6be0 { void m(); };
extern T_func_009e6be0 G1_func_009e6be0;
void func_009e6be0()
{
    G1_func_009e6be0.m();
}
