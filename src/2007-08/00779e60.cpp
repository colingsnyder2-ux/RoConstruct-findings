// roc 2007-08 00779e60  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779e60
//
// 00779e60  c70500248c00b4707800 mov dword ptr [0x8c2400], 0x7870b4
// 00779e6a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779e60;
extern char G2_func_00779e60;
void func_00779e60()
{
    G1_func_00779e60 = &G2_func_00779e60;
}
