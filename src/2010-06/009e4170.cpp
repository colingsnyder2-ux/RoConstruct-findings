// roc 2010-06 009e4170  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4170
//
// 009e4170  b964c5c100           mov ecx, 0xc1c564
// 009e4175  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e4170 { void m(); };
extern T_func_009e4170 G1_func_009e4170;
void func_009e4170()
{
    G1_func_009e4170.m();
}
