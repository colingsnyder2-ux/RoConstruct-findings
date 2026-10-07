// roc 2007-08 0077b710  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b710
//
// 0077b710  c705c05e8c00847e7b00 mov dword ptr [0x8c5ec0], 0x7b7e84
// 0077b71a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b710;
extern char G2_func_0077b710;
void func_0077b710()
{
    G1_func_0077b710 = &G2_func_0077b710;
}
