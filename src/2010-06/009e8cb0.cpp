// roc 2010-06 009e8cb0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8cb0
//
// 009e8cb0  c7050832c200340aa200 mov dword ptr [0xc23208], 0xa20a34
// 009e8cba  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e8cb0;
extern char G2_func_009e8cb0;
void func_009e8cb0()
{
    G1_func_009e8cb0 = &G2_func_009e8cb0;
}
