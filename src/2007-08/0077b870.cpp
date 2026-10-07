// roc 2007-08 0077b870  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b870
//
// 0077b870  c705fc618c00b4707800 mov dword ptr [0x8c61fc], 0x7870b4
// 0077b87a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b870;
extern char G2_func_0077b870;
void func_0077b870()
{
    G1_func_0077b870 = &G2_func_0077b870;
}
