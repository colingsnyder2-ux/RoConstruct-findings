// roc 2007-08 0077b860  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b860
//
// 0077b860  c70534638c00b4707800 mov dword ptr [0x8c6334], 0x7870b4
// 0077b86a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b860;
extern char G2_func_0077b860;
void func_0077b860()
{
    G1_func_0077b860 = &G2_func_0077b860;
}
