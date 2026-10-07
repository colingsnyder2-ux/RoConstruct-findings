// roc 2010-06 009e21b0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e21b0
//
// 009e21b0  b9208fc100           mov ecx, 0xc18f20
// 009e21b5  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e21b0 { void m(); };
extern T_func_009e21b0 G1_func_009e21b0;
void func_009e21b0()
{
    G1_func_009e21b0.m();
}
