// roc 2009-06 0089b950  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b950
//
// 0089b950  b9ace0a400           mov ecx, 0xa4e0ac
// 0089b955  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089b950 { void m(); };
extern T_func_0089b950 G1_func_0089b950;
void func_0089b950()
{
    G1_func_0089b950.m();
}
