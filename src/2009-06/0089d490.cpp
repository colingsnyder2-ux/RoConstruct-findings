// roc 2009-06 0089d490  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d490
//
// 0089d490  b9841aa500           mov ecx, 0xa51a84
// 0089d495  ff2510fd8900         jmp dword ptr [0x89fd10]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d490 { void m(); };
extern T_func_0089d490 G1_func_0089d490;
void func_0089d490()
{
    G1_func_0089d490.m();
}
