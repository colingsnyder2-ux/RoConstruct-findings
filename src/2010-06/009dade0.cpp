// roc 2010-06 009dade0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dade0
//
// 009dade0  b9e006c000           mov ecx, 0xc006e0
// 009dade5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009dade0 { void m(); };
extern T_func_009dade0 G1_func_009dade0;
void func_009dade0()
{
    G1_func_009dade0.m();
}
