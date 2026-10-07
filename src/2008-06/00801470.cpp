// roc 2008-06 00801470  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801470
//
// 00801470  b968da9700           mov ecx, 0x97da68
// 00801475  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801470 { void m(); };
extern T_func_00801470 G1_func_00801470;
void func_00801470()
{
    G1_func_00801470.m();
}
