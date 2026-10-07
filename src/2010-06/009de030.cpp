// roc 2010-06 009de030  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de030
//
// 009de030  b99891c000           mov ecx, 0xc09198
// 009de035  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009de030 { void m(); };
extern T_func_009de030 G1_func_009de030;
void func_009de030()
{
    G1_func_009de030.m();
}
