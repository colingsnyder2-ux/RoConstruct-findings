// roc 2007-08 0077a480  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a480
//
// 0077a480  c70540308c00b4707800 mov dword ptr [0x8c3040], 0x7870b4
// 0077a48a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077a480;
extern char G2_func_0077a480;
void func_0077a480()
{
    G1_func_0077a480 = &G2_func_0077a480;
}
