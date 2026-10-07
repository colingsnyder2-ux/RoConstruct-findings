// roc 2009-06 0089d690  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d690
//
// 0089d690  b91089a500           mov ecx, 0xa58910
// 0089d695  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d690 { void m(); };
extern T_func_0089d690 G1_func_0089d690;
void func_0089d690()
{
    G1_func_0089d690.m();
}
