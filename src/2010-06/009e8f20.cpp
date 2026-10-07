// roc 2010-06 009e8f20  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8f20
//
// 009e8f20  b98055c200           mov ecx, 0xc25580
// 009e8f25  ff25f0ce9e00         jmp dword ptr [0x9ecef0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e8f20 { void m(); };
extern T_func_009e8f20 G1_func_009e8f20;
void func_009e8f20()
{
    G1_func_009e8f20.m();
}
