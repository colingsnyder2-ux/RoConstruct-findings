// roc 2010-06 009e6990  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6990
//
// 009e6990  c70560fac1001809a000 mov dword ptr [0xc1fa60], 0xa00918
// 009e699a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e6990;
extern char G2_func_009e6990;
void func_009e6990()
{
    G1_func_009e6990 = &G2_func_009e6990;
}
