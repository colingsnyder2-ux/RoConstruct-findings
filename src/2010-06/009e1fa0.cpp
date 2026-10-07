// roc 2010-06 009e1fa0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e1fa0
//
// 009e1fa0  c705c487c1001809a000 mov dword ptr [0xc187c4], 0xa00918
// 009e1faa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e1fa0;
extern char G2_func_009e1fa0;
void func_009e1fa0()
{
    G1_func_009e1fa0 = &G2_func_009e1fa0;
}
