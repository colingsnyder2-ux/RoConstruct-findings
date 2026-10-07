// roc 2010-06 009e4f10  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4f10
//
// 009e4f10  b900d7c100           mov ecx, 0xc1d700
// 009e4f15  e926f6c1ff           jmp 0x604540
// auto-matched from its assembly shape

struct T_func_009e4f10 { void m(); };
extern T_func_009e4f10 G1_func_009e4f10;
void func_009e4f10()
{
    G1_func_009e4f10.m();
}
