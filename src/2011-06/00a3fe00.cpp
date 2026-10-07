// roc 2011-06 00a3fe00  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fe00
//
// 00a3fe00  b970f0d100           mov ecx, 0xd1f070
// 00a3fe05  ff25d004a400         jmp dword ptr [0xa404d0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fe00 { void m(); };
extern T_func_00a3fe00 G1_func_00a3fe00;
void func_00a3fe00()
{
    G1_func_00a3fe00.m();
}
