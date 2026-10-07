// roc 2009-06 0089d614  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d614
//
// 0089d614  c705ac2ba5007cf89000 mov dword ptr [0xa52bac], 0x90f87c
// 0089d61e  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089d614;
extern char G2_func_0089d614;
void func_0089d614()
{
    G1_func_0089d614 = &G2_func_0089d614;
}
