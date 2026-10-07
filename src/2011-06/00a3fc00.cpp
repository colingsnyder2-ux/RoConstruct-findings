// roc 2011-06 00a3fc00  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fc00
//
// 00a3fc00  b9f482d100           mov ecx, 0xd182f4
// 00a3fc05  ff25082ea400         jmp dword ptr [0xa42e08]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fc00 { void m(); };
extern T_func_00a3fc00 G1_func_00a3fc00;
void func_00a3fc00()
{
    G1_func_00a3fc00.m();
}
