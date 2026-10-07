// roc 2010-06 009e8cc0  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8cc0
//
// 009e8cc0  c7051c32c20090aca100 mov dword ptr [0xc2321c], 0xa1ac90
// 009e8cca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e8cc0;
extern char G2_func_009e8cc0;
void func_009e8cc0()
{
    G1_func_009e8cc0 = &G2_func_009e8cc0;
}
