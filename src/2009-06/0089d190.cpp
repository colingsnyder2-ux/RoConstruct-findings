// roc 2009-06 0089d190  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d190
//
// 0089d190  b98403a500           mov ecx, 0xa50384
// 0089d195  ff25c80e8a00         jmp dword ptr [0x8a0ec8]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_0089d190 { void m(); };
extern T_func_0089d190 G1_func_0089d190;
void func_0089d190()
{
    G1_func_0089d190.m();
}
