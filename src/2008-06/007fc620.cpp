// roc 2008-06 007fc620  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fc620
//
// 007fc620  b97c359700           mov ecx, 0x97357c
// 007fc625  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fc620 { void m(); };
extern T_func_007fc620 G1_func_007fc620;
void func_007fc620()
{
    G1_func_007fc620.m();
}
