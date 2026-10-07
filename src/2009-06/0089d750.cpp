// roc 2009-06 0089d750  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d750
//
// 0089d750  b9f08ba500           mov ecx, 0xa58bf0
// 0089d755  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d750 { void m(); };
extern T_func_0089d750 G1_func_0089d750;
void func_0089d750()
{
    G1_func_0089d750.m();
}
