// roc 2008-06 007fb040  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb040
//
// 007fb040  b9b8ee9600           mov ecx, 0x96eeb8
// 007fb045  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fb040 { void m(); };
extern T_func_007fb040 G1_func_007fb040;
void func_007fb040()
{
    G1_func_007fb040.m();
}
