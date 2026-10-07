// roc 2010-06 009e7610  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7610
//
// 009e7610  a1ec0bc200           mov eax, dword ptr [0xc20bec]
// 009e7615  50                   push eax
// 009e7616  e87f03dcff           call 0x7a799a
// 009e761b  83c404               add esp, 4
// 009e761e  c705cc0bc2001809a000 mov dword ptr [0xc20bcc], 0xa00918
// 009e7628  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7610(int);
void func_009e7610()
{
    G4_func_009e7610(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
