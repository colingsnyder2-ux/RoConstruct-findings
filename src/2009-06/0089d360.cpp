// roc 2009-06 0089d360  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d360
//
// 0089d360  b9f419a500           mov ecx, 0xa519f4
// 0089d365  ff2510fd8900         jmp dword ptr [0x89fd10]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d360 { void m(); };
extern T_func_0089d360 G1_func_0089d360;
void func_0089d360()
{
    G1_func_0089d360.m();
}
