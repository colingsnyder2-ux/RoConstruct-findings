// roc 2009-06 00895830  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895830
//
// 00895830  b928e0a300           mov ecx, 0xa3e028
// 00895835  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00895830 { void m(); };
extern T_func_00895830 G1_func_00895830;
void func_00895830()
{
    G1_func_00895830.m();
}
