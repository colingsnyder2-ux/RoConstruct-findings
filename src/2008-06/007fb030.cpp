// roc 2008-06 007fb030  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb030
//
// 007fb030  b920ef9600           mov ecx, 0x96ef20
// 007fb035  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fb030 { void m(); };
extern T_func_007fb030 G1_func_007fb030;
void func_007fb030()
{
    G1_func_007fb030.m();
}
