// roc 2010-06 009e5f30  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5f30
//
// 009e5f30  a178f0c100           mov eax, dword ptr [0xc1f078]
// 009e5f35  50                   push eax
// 009e5f36  e85f1adcff           call 0x7a799a
// 009e5f3b  83c404               add esp, 4
// 009e5f3e  c7055cf0c1001809a000 mov dword ptr [0xc1f05c], 0xa00918
// 009e5f48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5f30(int);
void func_009e5f30()
{
    G4_func_009e5f30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
