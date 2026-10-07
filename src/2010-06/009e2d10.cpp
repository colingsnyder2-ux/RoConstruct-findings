// roc 2010-06 009e2d10  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2d10
//
// 009e2d10  b9009ec100           mov ecx, 0xc19e00
// 009e2d15  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e2d10 { void m(); };
extern T_func_009e2d10 G1_func_009e2d10;
void func_009e2d10()
{
    G1_func_009e2d10.m();
}
