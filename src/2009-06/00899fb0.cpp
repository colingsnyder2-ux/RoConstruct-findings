// roc 2009-06 00899fb0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899fb0
//
// 00899fb0  b9e8b9a400           mov ecx, 0xa4b9e8
// 00899fb5  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00899fb0 { void m(); };
extern T_func_00899fb0 G1_func_00899fb0;
void func_00899fb0()
{
    G1_func_00899fb0.m();
}
