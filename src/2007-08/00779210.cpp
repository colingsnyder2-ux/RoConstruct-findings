// roc 2007-08 00779210  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779210
//
// 00779210  b934fc8b00           mov ecx, 0x8bfc34
// 00779215  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00779210 { void m(); };
extern T_func_00779210 G1_func_00779210;
void func_00779210()
{
    G1_func_00779210.m();
}
