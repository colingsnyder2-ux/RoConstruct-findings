// roc 2011-06 00a30860  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30860
//
// 00a30860  b98c23cb00           mov ecx, 0xcb238c
// 00a30865  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30860 { void m(); };
extern T_func_00a30860 G1_func_00a30860;
void func_00a30860()
{
    G1_func_00a30860.m();
}
