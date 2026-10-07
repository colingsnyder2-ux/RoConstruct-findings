// roc 2008-06 008019a0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008019a0
//
// 008019a0  b990f39700           mov ecx, 0x97f390
// 008019a5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008019a0 { void m(); };
extern T_func_008019a0 G1_func_008019a0;
void func_008019a0()
{
    G1_func_008019a0.m();
}
