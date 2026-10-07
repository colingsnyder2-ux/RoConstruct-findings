// roc 2009-06 00896a60  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a60
//
// 00896a60  b93429a400           mov ecx, 0xa42934
// 00896a65  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00896a60 { void m(); };
extern T_func_00896a60 G1_func_00896a60;
void func_00896a60()
{
    G1_func_00896a60.m();
}
