// roc 2007-08 00779290  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779290
//
// 00779290  b9d4088c00           mov ecx, 0x8c08d4
// 00779295  ff25ace67700         jmp dword ptr [0x77e6ac]
// auto-matched from its assembly shape

struct __declspec(dllimport) T_func_00779290 { void m(); };
extern T_func_00779290 G1_func_00779290;
void func_00779290()
{
    G1_func_00779290.m();
}
