// roc 2009-06 00896a70  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896a70
//
// 00896a70  b95429a400           mov ecx, 0xa42954
// 00896a75  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00896a70 { void m(); };
extern T_func_00896a70 G1_func_00896a70;
void func_00896a70()
{
    G1_func_00896a70.m();
}
