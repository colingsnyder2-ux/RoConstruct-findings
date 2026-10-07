// roc 2009-06 0089d180  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d180
//
// 0089d180  b92804a500           mov ecx, 0xa50428
// 0089d185  ff25e40e8a00         jmp dword ptr [0x8a0ee4]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d180 { void m(); };
extern T_func_0089d180 G1_func_0089d180;
void func_0089d180()
{
    G1_func_0089d180.m();
}
