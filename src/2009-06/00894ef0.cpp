// roc 2009-06 00894ef0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894ef0
//
// 00894ef0  b924c9a300           mov ecx, 0xa3c924
// 00894ef5  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00894ef0 { void m(); };
extern T_func_00894ef0 G1_func_00894ef0;
void func_00894ef0()
{
    G1_func_00894ef0.m();
}
