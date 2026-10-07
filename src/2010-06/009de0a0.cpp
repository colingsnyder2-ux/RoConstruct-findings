// roc 2010-06 009de0a0  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de0a0
//
// 009de0a0  b96c9ec000           mov ecx, 0xc09e6c
// 009de0a5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009de0a0 { void m(); };
extern T_func_009de0a0 G1_func_009de0a0;
void func_009de0a0()
{
    G1_func_009de0a0.m();
}
