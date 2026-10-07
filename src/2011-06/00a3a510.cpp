// roc 2011-06 00a3a510  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3a510
//
// 00a3a510  b900cbcc00           mov ecx, 0xcccb00
// 00a3a515  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3a510 { void m(); };
extern T_func_00a3a510 G1_func_00a3a510;
void func_00a3a510()
{
    G1_func_00a3a510.m();
}
