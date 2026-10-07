// roc 2008-06 007fafe0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fafe0
//
// 007fafe0  b998df9600           mov ecx, 0x96df98
// 007fafe5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fafe0 { void m(); };
extern T_func_007fafe0 G1_func_007fafe0;
void func_007fafe0()
{
    G1_func_007fafe0.m();
}
