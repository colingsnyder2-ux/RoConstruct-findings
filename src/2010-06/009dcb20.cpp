// roc 2010-06 009dcb20  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb20
//
// 009dcb20  a1e84dc000           mov eax, dword ptr [0xc04de8]
// 009dcb25  50                   push eax
// 009dcb26  e86faedcff           call 0x7a799a
// 009dcb2b  83c404               add esp, 4
// 009dcb2e  c705cc4dc0001809a000 mov dword ptr [0xc04dcc], 0xa00918
// 009dcb38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dcb20(int);
void func_009dcb20()
{
    G4_func_009dcb20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
