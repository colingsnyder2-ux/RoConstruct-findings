// roc 2007-08 00777f00  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777f00
//
// 00777f00  b9e4cf8b00           mov ecx, 0x8bcfe4
// 00777f05  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00777f00 { void m(); };
extern T_func_00777f00 G1_func_00777f00;
void func_00777f00()
{
    G1_func_00777f00.m();
}
