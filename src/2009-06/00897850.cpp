// roc 2009-06 00897850  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897850
//
// 00897850  b90c45a400           mov ecx, 0xa4450c
// 00897855  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00897850 { void m(); };
extern T_func_00897850 G1_func_00897850;
void func_00897850()
{
    G1_func_00897850.m();
}
