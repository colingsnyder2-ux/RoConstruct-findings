// roc 2007-08 00777f40  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777f40
//
// 00777f40  b9c0cf8b00           mov ecx, 0x8bcfc0
// 00777f45  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00777f40 { void m(); };
extern T_func_00777f40 G1_func_00777f40;
void func_00777f40()
{
    G1_func_00777f40.m();
}
