// roc 2008-06 0080195e  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0080195e
//
// 0080195e  c705ecf297006c1f8700 mov dword ptr [0x97f2ec], 0x871f6c
// 00801968  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0080195e;
extern char G2_func_0080195e;
void func_0080195e()
{
    G1_func_0080195e = &G2_func_0080195e;
}
