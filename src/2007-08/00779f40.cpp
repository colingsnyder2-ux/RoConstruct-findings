// roc 2007-08 00779f40  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779f40
//
// 00779f40  c70518258c00b4707800 mov dword ptr [0x8c2518], 0x7870b4
// 00779f4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779f40;
extern char G2_func_00779f40;
void func_00779f40()
{
    G1_func_00779f40 = &G2_func_00779f40;
}
