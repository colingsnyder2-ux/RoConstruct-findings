// roc 2007-08 00779f10  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779f10
//
// 00779f10  c7053c248c00b4707800 mov dword ptr [0x8c243c], 0x7870b4
// 00779f1a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_00779f10;
extern char G2_func_00779f10;
void func_00779f10()
{
    G1_func_00779f10 = &G2_func_00779f10;
}
