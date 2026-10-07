// roc 2010-06 009e5ee0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ee0
//
// 009e5ee0  b9e0f1c100           mov ecx, 0xc1f1e0
// 009e5ee5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e5ee0 { void m(); };
extern T_func_009e5ee0 G1_func_009e5ee0;
void func_009e5ee0()
{
    G1_func_009e5ee0.m();
}
