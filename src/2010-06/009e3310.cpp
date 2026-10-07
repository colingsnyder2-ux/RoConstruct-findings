// roc 2010-06 009e3310  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3310
//
// 009e3310  b9cca9c100           mov ecx, 0xc1a9cc
// 009e3315  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e3310 { void m(); };
extern T_func_009e3310 G1_func_009e3310;
void func_009e3310()
{
    G1_func_009e3310.m();
}
