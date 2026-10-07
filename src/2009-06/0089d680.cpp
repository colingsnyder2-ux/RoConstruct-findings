// roc 2009-06 0089d680  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d680
//
// 0089d680  b9bc88a500           mov ecx, 0xa588bc
// 0089d685  ff25640b8a00         jmp dword ptr [0x8a0b64]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d680 { void m(); };
extern T_func_0089d680 G1_func_0089d680;
void func_0089d680()
{
    G1_func_0089d680.m();
}
