// roc 2008-06 007fb020  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb020
//
// 007fb020  b994ee9600           mov ecx, 0x96ee94
// 007fb025  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fb020 { void m(); };
extern T_func_007fb020 G1_func_007fb020;
void func_007fb020()
{
    G1_func_007fb020.m();
}
