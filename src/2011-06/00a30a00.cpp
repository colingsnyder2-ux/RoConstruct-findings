// roc 2011-06 00a30a00  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30a00
//
// 00a30a00  b95024cb00           mov ecx, 0xcb2450
// 00a30a05  ff25a004a400         jmp dword ptr [0xa404a0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30a00 { void m(); };
extern T_func_00a30a00 G1_func_00a30a00;
void func_00a30a00()
{
    G1_func_00a30a00.m();
}
