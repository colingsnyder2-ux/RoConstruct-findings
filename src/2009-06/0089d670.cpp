// roc 2009-06 0089d670  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d670
//
// 0089d670  b99888a500           mov ecx, 0xa58898
// 0089d675  ff25640b8a00         jmp dword ptr [0x8a0b64]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d670 { void m(); };
extern T_func_0089d670 G1_func_0089d670;
void func_0089d670()
{
    G1_func_0089d670.m();
}
