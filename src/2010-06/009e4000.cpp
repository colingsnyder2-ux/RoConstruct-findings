// roc 2010-06 009e4000  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4000
//
// 009e4000  b948c2c100           mov ecx, 0xc1c248
// 009e4005  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e4000 { void m(); };
extern T_func_009e4000 G1_func_009e4000;
void func_009e4000()
{
    G1_func_009e4000.m();
}
