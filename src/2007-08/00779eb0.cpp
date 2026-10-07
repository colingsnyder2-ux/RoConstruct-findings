// roc 2007-08 00779eb0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779eb0
//
// 00779eb0  c705b4248c00b4707800 mov dword ptr [0x8c24b4], 0x7870b4
// 00779eba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779eb0;
extern char G2_func_00779eb0;
void func_00779eb0()
{
    G1_func_00779eb0 = &G2_func_00779eb0;
}
