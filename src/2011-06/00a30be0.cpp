// roc 2011-06 00a30be0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30be0
//
// 00a30be0  b9a827cb00           mov ecx, 0xcb27a8
// 00a30be5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30be0 { void m(); };
extern T_func_00a30be0 G1_func_00a30be0;
void func_00a30be0()
{
    G1_func_00a30be0.m();
}
