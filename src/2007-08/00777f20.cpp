// roc 2007-08 00777f20  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777f20
//
// 00777f20  b904d08b00           mov ecx, 0x8bd004
// 00777f25  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00777f20 { void m(); };
extern T_func_00777f20 G1_func_00777f20;
void func_00777f20()
{
    G1_func_00777f20.m();
}
