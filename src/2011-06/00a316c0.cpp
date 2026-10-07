// roc 2011-06 00a316c0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a316c0
//
// 00a316c0  b91c38cb00           mov ecx, 0xcb381c
// 00a316c5  ff25082ea400         jmp dword ptr [0xa42e08]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a316c0 { void m(); };
extern T_func_00a316c0 G1_func_00a316c0;
void func_00a316c0()
{
    G1_func_00a316c0.m();
}
