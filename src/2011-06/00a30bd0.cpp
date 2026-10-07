// roc 2011-06 00a30bd0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30bd0
//
// 00a30bd0  b98c27cb00           mov ecx, 0xcb278c
// 00a30bd5  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30bd0 { void m(); };
extern T_func_00a30bd0 G1_func_00a30bd0;
void func_00a30bd0()
{
    G1_func_00a30bd0.m();
}
