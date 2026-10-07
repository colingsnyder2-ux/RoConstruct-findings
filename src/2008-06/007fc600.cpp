// roc 2008-06 007fc600  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc600
//
// 007fc600  b93c359700           mov ecx, 0x97353c
// 007fc605  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fc600 { void m(); };
extern T_func_007fc600 G1_func_007fc600;
void func_007fc600()
{
    G1_func_007fc600.m();
}
