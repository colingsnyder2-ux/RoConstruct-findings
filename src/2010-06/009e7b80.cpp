// roc 2010-06 009e7b80  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b80
//
// 009e7b80  c705f812c2001809a000 mov dword ptr [0xc212f8], 0xa00918
// 009e7b8a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e7b80;
extern char G2_func_009e7b80;
void func_009e7b80()
{
    G1_func_009e7b80 = &G2_func_009e7b80;
}
