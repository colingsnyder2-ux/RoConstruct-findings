// roc 2010-06 009db840  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db840
//
// 009db840  b9a819c000           mov ecx, 0xc019a8
// 009db845  ff25f0ce9e00         jmp dword ptr [0x9ecef0]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_009db840 { void m(); };
extern T_func_009db840 G1_func_009db840;
void func_009db840()
{
    G1_func_009db840.m();
}
