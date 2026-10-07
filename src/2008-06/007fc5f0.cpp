// roc 2008-06 007fc5f0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc5f0
//
// 007fc5f0  b91c359700           mov ecx, 0x97351c
// 007fc5f5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fc5f0 { void m(); };
extern T_func_007fc5f0 G1_func_007fc5f0;
void func_007fc5f0()
{
    G1_func_007fc5f0.m();
}
