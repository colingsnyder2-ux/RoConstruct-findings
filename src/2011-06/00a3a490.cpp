// roc 2011-06 00a3a490  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a490
//
// 00a3a490  b9b8c9cc00           mov ecx, 0xccc9b8
// 00a3a495  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3a490 { void m(); };
extern T_func_00a3a490 G1_func_00a3a490;
void func_00a3a490()
{
    G1_func_00a3a490.m();
}
