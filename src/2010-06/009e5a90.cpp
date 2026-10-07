// roc 2010-06 009e5a90  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5a90
//
// 009e5a90  c7054cedc1001809a000 mov dword ptr [0xc1ed4c], 0xa00918
// 009e5a9a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5a90;
extern char G2_func_009e5a90;
void func_009e5a90()
{
    G1_func_009e5a90 = &G2_func_009e5a90;
}
