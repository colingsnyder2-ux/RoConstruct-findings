// roc 2010-06 009dc140  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc140
//
// 009dc140  b97c3cc000           mov ecx, 0xc03c7c
// 009dc145  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009dc140 { void m(); };
extern T_func_009dc140 G1_func_009dc140;
void func_009dc140()
{
    G1_func_009dc140.m();
}
