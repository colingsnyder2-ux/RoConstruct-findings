// roc 2008-06 008014c0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008014c0
//
// 008014c0  b9a0da9700           mov ecx, 0x97daa0
// 008014c5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_008014c0 { void m(); };
extern T_func_008014c0 G1_func_008014c0;
void func_008014c0()
{
    G1_func_008014c0.m();
}
