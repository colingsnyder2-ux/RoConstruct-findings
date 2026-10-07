// roc 2009-06 00897860  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897860
//
// 00897860  b9f845a400           mov ecx, 0xa445f8
// 00897865  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00897860 { void m(); };
extern T_func_00897860 G1_func_00897860;
void func_00897860()
{
    G1_func_00897860.m();
}
