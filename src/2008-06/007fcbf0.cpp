// roc 2008-06 007fcbf0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fcbf0
//
// 007fcbf0  b9f0409700           mov ecx, 0x9740f0
// 007fcbf5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fcbf0 { void m(); };
extern T_func_007fcbf0 G1_func_007fcbf0;
void func_007fcbf0()
{
    G1_func_007fcbf0.m();
}
