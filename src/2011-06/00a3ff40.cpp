// roc 2011-06 00a3ff40  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ff40
//
// 00a3ff40  b924f8d100           mov ecx, 0xd1f824
// 00a3ff45  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3ff40 { void m(); };
extern T_func_00a3ff40 G1_func_00a3ff40;
void func_00a3ff40()
{
    G1_func_00a3ff40.m();
}
