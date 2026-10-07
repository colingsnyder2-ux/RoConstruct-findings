// roc 2007-08 00779ee0  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779ee0
//
// 00779ee0  c70578248c00b4707800 mov dword ptr [0x8c2478], 0x7870b4
// 00779eea  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779ee0;
extern char G2_func_00779ee0;
void func_00779ee0()
{
    G1_func_00779ee0 = &G2_func_00779ee0;
}
