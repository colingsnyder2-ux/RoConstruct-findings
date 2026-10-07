// roc 2010-06 009e9240  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9240
//
// 009e9240  b928c4c200           mov ecx, 0xc2c428
// 009e9245  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9240 { void m(); };
extern T_func_009e9240 G1_func_009e9240;
void func_009e9240()
{
    G1_func_009e9240.m();
}
