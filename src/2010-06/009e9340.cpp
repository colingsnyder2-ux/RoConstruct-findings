// roc 2010-06 009e9340  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9340
//
// 009e9340  b9a0cac200           mov ecx, 0xc2caa0
// 009e9345  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9340 { void m(); };
extern T_func_009e9340 G1_func_009e9340;
void func_009e9340()
{
    G1_func_009e9340.m();
}
