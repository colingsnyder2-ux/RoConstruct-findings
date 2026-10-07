// roc 2011-06 00a30a10  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30a10
//
// 00a30a10  b9d424cb00           mov ecx, 0xcb24d4
// 00a30a15  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30a10 { void m(); };
extern T_func_00a30a10 G1_func_00a30a10;
void func_00a30a10()
{
    G1_func_00a30a10.m();
}
