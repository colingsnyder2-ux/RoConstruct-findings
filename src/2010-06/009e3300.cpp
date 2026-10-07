// roc 2010-06 009e3300  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3300
//
// 009e3300  b964acc100           mov ecx, 0xc1ac64
// 009e3305  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e3300 { void m(); };
extern T_func_009e3300 G1_func_009e3300;
void func_009e3300()
{
    G1_func_009e3300.m();
}
