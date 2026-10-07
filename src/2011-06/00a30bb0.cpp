// roc 2011-06 00a30bb0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30bb0
//
// 00a30bb0  b98426cb00           mov ecx, 0xcb2684
// 00a30bb5  ff25082ea400         jmp dword ptr [0xa42e08]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30bb0 { void m(); };
extern T_func_00a30bb0 G1_func_00a30bb0;
void func_00a30bb0()
{
    G1_func_00a30bb0.m();
}
