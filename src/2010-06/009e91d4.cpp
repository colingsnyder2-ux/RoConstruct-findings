// roc 2010-06 009e91d4  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e91d4
//
// 009e91d4  c7053467c200e43fa700 mov dword ptr [0xc26734], 0xa73fe4
// 009e91de  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e91d4;
extern char G2_func_009e91d4;
void func_009e91d4()
{
    G1_func_009e91d4 = &G2_func_009e91d4;
}
