// roc 2008-06 00800a60  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00800a60
//
// 00800a60  b980d29700           mov ecx, 0x97d280
// 00800a65  ff2568248000         jmp dword ptr [0x802468]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00800a60 { void m(); };
extern T_func_00800a60 G1_func_00800a60;
void func_00800a60()
{
    G1_func_00800a60.m();
}
