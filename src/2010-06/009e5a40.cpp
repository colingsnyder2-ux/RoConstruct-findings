// roc 2010-06 009e5a40  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5a40
//
// 009e5a40  c70514eac1001809a000 mov dword ptr [0xc1ea14], 0xa00918
// 009e5a4a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5a40;
extern char G2_func_009e5a40;
void func_009e5a40()
{
    G1_func_009e5a40 = &G2_func_009e5a40;
}
