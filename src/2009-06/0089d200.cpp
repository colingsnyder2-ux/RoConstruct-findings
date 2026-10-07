// roc 2009-06 0089d200  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d200
//
// 0089d200  b9c803a500           mov ecx, 0xa503c8
// 0089d205  ff25c4e48900         jmp dword ptr [0x89e4c4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d200 { void m(); };
extern T_func_0089d200 G1_func_0089d200;
void func_0089d200()
{
    G1_func_0089d200.m();
}
