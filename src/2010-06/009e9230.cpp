// roc 2010-06 009e9230  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e9230
//
// 009e9230  b9fcc3c200           mov ecx, 0xc2c3fc
// 009e9235  ff2584b89e00         jmp dword ptr [0x9eb884]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009e9230 { void m(); };
extern T_func_009e9230 G1_func_009e9230;
void func_009e9230()
{
    G1_func_009e9230.m();
}
