// roc 2008-06 007fb050  unit: seg_007f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb050
//
// 007fb050  b9dcee9600           mov ecx, 0x96eedc
// 007fb055  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_007fb050 { void m(); };
extern T_func_007fb050 G1_func_007fb050;
void func_007fb050()
{
    G1_func_007fb050.m();
}
