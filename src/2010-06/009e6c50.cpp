// roc 2010-06 009e6c50  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6c50
//
// 009e6c50  b9b8ffc100           mov ecx, 0xc1ffb8
// 009e6c55  e916f9baff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e6c50 { void m(); };
extern T_func_009e6c50 G1_func_009e6c50;
void func_009e6c50()
{
    G1_func_009e6c50.m();
}
