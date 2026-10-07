// roc 2011-06 00a39580  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a39580
//
// 00a39580  b9c0b2cc00           mov ecx, 0xccb2c0
// 00a39585  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a39580 { void m(); };
extern T_func_00a39580 G1_func_00a39580;
void func_00a39580()
{
    G1_func_00a39580.m();
}
