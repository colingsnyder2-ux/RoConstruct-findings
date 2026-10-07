// roc 2010-06 009e0fe0  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0fe0
//
// 009e0fe0  b9e06bc100           mov ecx, 0xc16be0
// 009e0fe5  e956dabcff           jmp 0x5aea40
// auto-matched from its assembly shape

struct T_func_009e0fe0 { void m(); };
extern T_func_009e0fe0 G1_func_009e0fe0;
void func_009e0fe0()
{
    G1_func_009e0fe0.m();
}
