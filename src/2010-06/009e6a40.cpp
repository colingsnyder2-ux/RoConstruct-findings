// roc 2010-06 009e6a40  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6a40
//
// 009e6a40  b948fbc100           mov ecx, 0xc1fb48
// 009e6a45  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e6a40 { void m(); };
extern T_func_009e6a40 G1_func_009e6a40;
void func_009e6a40()
{
    G1_func_009e6a40.m();
}
