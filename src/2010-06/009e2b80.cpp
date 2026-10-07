// roc 2010-06 009e2b80  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2b80
//
// 009e2b80  b9b09bc100           mov ecx, 0xc19bb0
// 009e2b85  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e2b80 { void m(); };
extern T_func_009e2b80 G1_func_009e2b80;
void func_009e2b80()
{
    G1_func_009e2b80.m();
}
