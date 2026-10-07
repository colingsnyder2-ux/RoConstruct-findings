// roc 2008-06 007fb0b0  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb0b0
//
// 007fb0b0  b9fcef9600           mov ecx, 0x96effc
// 007fb0b5  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fb0b0 { void m(); };
extern T_func_007fb0b0 G1_func_007fb0b0;
void func_007fb0b0()
{
    G1_func_007fb0b0.m();
}
