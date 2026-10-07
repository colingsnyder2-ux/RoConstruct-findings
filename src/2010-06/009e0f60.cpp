// roc 2010-06 009e0f60  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e0f60
//
// 009e0f60  b96073c100           mov ecx, 0xc17360
// 009e0f65  e9b6efbcff           jmp 0x5aff20
// auto-matched from its assembly shape

struct T_func_009e0f60 { void m(); };
extern T_func_009e0f60 G1_func_009e0f60;
void func_009e0f60()
{
    G1_func_009e0f60.m();
}
