// roc 2009-06 00899fc0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899fc0
//
// 00899fc0  b910baa400           mov ecx, 0xa4ba10
// 00899fc5  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00899fc0 { void m(); };
extern T_func_00899fc0 G1_func_00899fc0;
void func_00899fc0()
{
    G1_func_00899fc0.m();
}
