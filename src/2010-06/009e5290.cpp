// roc 2010-06 009e5290  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5290
//
// 009e5290  b970dec100           mov ecx, 0xc1de70
// 009e5295  e9d612bbff           jmp 0x596570
// auto-matched from its assembly shape

struct T_func_009e5290 { void m(); };
extern T_func_009e5290 G1_func_009e5290;
void func_009e5290()
{
    G1_func_009e5290.m();
}
