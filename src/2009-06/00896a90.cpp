// roc 2009-06 00896a90  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a90
//
// 00896a90  b99429a400           mov ecx, 0xa42994
// 00896a95  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00896a90 { void m(); };
extern T_func_00896a90 G1_func_00896a90;
void func_00896a90()
{
    G1_func_00896a90.m();
}
