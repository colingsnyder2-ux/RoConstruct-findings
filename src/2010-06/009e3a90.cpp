// roc 2010-06 009e3a90  unit: seg_009e0000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3a90
//
// 009e3a90  b978b0c100           mov ecx, 0xc1b078
// 009e3a95  e906b3c8ff           jmp 0x66eda0
// auto-matched from its assembly shape

struct T_func_009e3a90 { void m(); };
extern T_func_009e3a90 G1_func_009e3a90;
void func_009e3a90()
{
    G1_func_009e3a90.m();
}
