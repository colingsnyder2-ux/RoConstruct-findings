// roc 2008-06 007fcbd0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcbd0
//
// 007fcbd0  b9e83f9700           mov ecx, 0x973fe8
// 007fcbd5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fcbd0 { void m(); };
extern T_func_007fcbd0 G1_func_007fcbd0;
void func_007fcbd0()
{
    G1_func_007fcbd0.m();
}
