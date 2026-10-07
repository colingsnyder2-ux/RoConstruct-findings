// roc 2010-06 009e4160  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4160
//
// 009e4160  b948c5c100           mov ecx, 0xc1c548
// 009e4165  ff2500a49e00         jmp dword ptr [0x9ea400]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e4160 { void m(); };
extern T_func_009e4160 G1_func_009e4160;
void func_009e4160()
{
    G1_func_009e4160.m();
}
