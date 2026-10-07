// roc 2009-06 0089d1a0  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d1a0
//
// 0089d1a0  b9e403a500           mov ecx, 0xa503e4
// 0089d1a5  ff25c80e8a00         jmp dword ptr [0x8a0ec8]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d1a0 { void m(); };
extern T_func_0089d1a0 G1_func_0089d1a0;
void func_0089d1a0()
{
    G1_func_0089d1a0.m();
}
