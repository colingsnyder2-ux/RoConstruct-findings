// roc 2008-06 00801450  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801450
//
// 00801450  b9d4da9700           mov ecx, 0x97dad4
// 00801455  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801450 { void m(); };
extern T_func_00801450 G1_func_00801450;
void func_00801450()
{
    G1_func_00801450.m();
}
