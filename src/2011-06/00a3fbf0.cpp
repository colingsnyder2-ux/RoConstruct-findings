// roc 2011-06 00a3fbf0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fbf0
//
// 00a3fbf0  b9e882d100           mov ecx, 0xd182e8
// 00a3fbf5  ff25082ea400         jmp dword ptr [0xa42e08]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fbf0 { void m(); };
extern T_func_00a3fbf0 G1_func_00a3fbf0;
void func_00a3fbf0()
{
    G1_func_00a3fbf0.m();
}
