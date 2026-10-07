// roc 2010-06 009dc0a0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc0a0
//
// 009dc0a0  b93c39c000           mov ecx, 0xc0393c
// 009dc0a5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009dc0a0 { void m(); };
extern T_func_009dc0a0 G1_func_009dc0a0;
void func_009dc0a0()
{
    G1_func_009dc0a0.m();
}
