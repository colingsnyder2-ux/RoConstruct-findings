// roc 2011-06 00a3fde0  unit: seg_00a30000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3fde0
//
// 00a3fde0  b940f0d100           mov ecx, 0xd1f040
// 00a3fde5  ff25b818a400         jmp dword ptr [0xa418b8]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00a3fde0 { void m(); };
extern T_func_00a3fde0 G1_func_00a3fde0;
void func_00a3fde0()
{
    G1_func_00a3fde0.m();
}
