// roc 2010-06 009e9160  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9160
//
// 009e9160  b94c62c200           mov ecx, 0xc2624c
// 009e9165  ff25f0ce9e00         jmp dword ptr [0x9ecef0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9160 { void m(); };
extern T_func_009e9160 G1_func_009e9160;
void func_009e9160()
{
    G1_func_009e9160.m();
}
