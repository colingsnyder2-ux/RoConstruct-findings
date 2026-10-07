// roc 2008-06 00801980  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801980
//
// 00801980  b9b4f39700           mov ecx, 0x97f3b4
// 00801985  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00801980 { void m(); };
extern T_func_00801980 G1_func_00801980;
void func_00801980()
{
    G1_func_00801980.m();
}
