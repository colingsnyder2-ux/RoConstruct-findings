// roc 2009-06 0089b960  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b960
//
// 0089b960  b9cce0a400           mov ecx, 0xa4e0cc
// 0089b965  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089b960 { void m(); };
extern T_func_0089b960 G1_func_0089b960;
void func_0089b960()
{
    G1_func_0089b960.m();
}
