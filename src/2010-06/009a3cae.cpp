// roc 2010-06 009a3cae  unit: seg_009a0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009a3cae
//
// 009a3cae  b948fbc100           mov ecx, 0xc1fb48
// 009a3cb3  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009a3cae { void m(); };
extern T_func_009a3cae G1_func_009a3cae;
void func_009a3cae()
{
    G1_func_009a3cae.m();
}
