// roc 2010-06 009e3110  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3110
//
// 009e3110  b9d0a7c100           mov ecx, 0xc1a7d0
// 009e3115  e9760ac4ff           jmp 0x623b90
// auto-matched from its assembly shape

struct T_func_009e3110 { void m(); };
extern T_func_009e3110 G1_func_009e3110;
void func_009e3110()
{
    G1_func_009e3110.m();
}
