// roc 2009-06 00899a00  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899a00
//
// 00899a00  b910b3a400           mov ecx, 0xa4b310
// 00899a05  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00899a00 { void m(); };
extern T_func_00899a00 G1_func_00899a00;
void func_00899a00()
{
    G1_func_00899a00.m();
}
