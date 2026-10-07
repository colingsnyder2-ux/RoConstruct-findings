// roc 2008-06 00801570  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801570
//
// 00801570  b9a8db9700           mov ecx, 0x97dba8
// 00801575  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801570 { void m(); };
extern T_func_00801570 G1_func_00801570;
void func_00801570()
{
    G1_func_00801570.m();
}
