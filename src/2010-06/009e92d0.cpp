// roc 2010-06 009e92d0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e92d0
//
// 009e92d0  b9dcc9c200           mov ecx, 0xc2c9dc
// 009e92d5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e92d0 { void m(); };
extern T_func_009e92d0 G1_func_009e92d0;
void func_009e92d0()
{
    G1_func_009e92d0.m();
}
