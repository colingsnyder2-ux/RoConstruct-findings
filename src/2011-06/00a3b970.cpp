// roc 2011-06 00a3b970  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3b970
//
// 00a3b970  b9f0f2cc00           mov ecx, 0xccf2f0
// 00a3b975  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3b970 { void m(); };
extern T_func_00a3b970 G1_func_00a3b970;
void func_00a3b970()
{
    G1_func_00a3b970.m();
}
