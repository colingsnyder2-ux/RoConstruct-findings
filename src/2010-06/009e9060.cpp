// roc 2010-06 009e9060  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9060
//
// 009e9060  b91856c200           mov ecx, 0xc25618
// 009e9065  ff25f0ce9e00         jmp dword ptr [0x9ecef0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9060 { void m(); };
extern T_func_009e9060 G1_func_009e9060;
void func_009e9060()
{
    G1_func_009e9060.m();
}
