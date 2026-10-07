// roc 2011-06 00a3fd10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fd10
//
// 00a3fd10  b9388fd100           mov ecx, 0xd18f38
// 00a3fd15  ff25082ea400         jmp dword ptr [0xa42e08]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fd10 { void m(); };
extern T_func_00a3fd10 G1_func_00a3fd10;
void func_00a3fd10()
{
    G1_func_00a3fd10.m();
}
