// roc 2010-06 009e6610  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6610
//
// 009e6610  a104f9c100           mov eax, dword ptr [0xc1f904]
// 009e6615  50                   push eax
// 009e6616  e87f13dcff           call 0x7a799a
// 009e661b  83c404               add esp, 4
// 009e661e  c705e8f8c1001809a000 mov dword ptr [0xc1f8e8], 0xa00918
// 009e6628  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6610(int);
void func_009e6610()
{
    G4_func_009e6610(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
