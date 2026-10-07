// roc 2011-06 00a30850  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a30850
//
// 00a30850  b97023cb00           mov ecx, 0xcb2370
// 00a30855  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a30850 { void m(); };
extern T_func_00a30850 G1_func_00a30850;
void func_00a30850()
{
    G1_func_00a30850.m();
}
