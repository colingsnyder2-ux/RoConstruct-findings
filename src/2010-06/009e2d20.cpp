// roc 2010-06 009e2d20  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2d20
//
// 009e2d20  b9309ec100           mov ecx, 0xc19e30
// 009e2d25  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e2d20 { void m(); };
extern T_func_009e2d20 G1_func_009e2d20;
void func_009e2d20()
{
    G1_func_009e2d20.m();
}
