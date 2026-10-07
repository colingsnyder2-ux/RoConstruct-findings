// roc 2008-06 00801a80  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801a80
//
// 00801a80  b980f69700           mov ecx, 0x97f680
// 00801a85  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801a80 { void m(); };
extern T_func_00801a80 G1_func_00801a80;
void func_00801a80()
{
    G1_func_00801a80.m();
}
