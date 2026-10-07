// roc 2008-06 007fc610  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc610
//
// 007fc610  b95c359700           mov ecx, 0x97355c
// 007fc615  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fc610 { void m(); };
extern T_func_007fc610 G1_func_007fc610;
void func_007fc610()
{
    G1_func_007fc610.m();
}
