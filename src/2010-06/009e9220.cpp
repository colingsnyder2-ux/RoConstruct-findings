// roc 2010-06 009e9220  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9220
//
// 009e9220  b950c4c200           mov ecx, 0xc2c450
// 009e9225  ff250cb89e00         jmp dword ptr [0x9eb80c]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9220 { void m(); };
extern T_func_009e9220 G1_func_009e9220;
void func_009e9220()
{
    G1_func_009e9220.m();
}
