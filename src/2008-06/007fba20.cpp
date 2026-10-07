// roc 2008-06 007fba20  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fba20
//
// 007fba20  b9880b9700           mov ecx, 0x970b88
// 007fba25  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fba20 { void m(); };
extern T_func_007fba20 G1_func_007fba20;
void func_007fba20()
{
    G1_func_007fba20.m();
}
