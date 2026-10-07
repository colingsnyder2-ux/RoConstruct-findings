// roc 2010-06 009e5ef0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ef0
//
// 009e5ef0  c70504f4c10090aca100 mov dword ptr [0xc1f404], 0xa1ac90
// 009e5efa  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5ef0;
extern char G2_func_009e5ef0;
void func_009e5ef0()
{
    G1_func_009e5ef0 = &G2_func_009e5ef0;
}
