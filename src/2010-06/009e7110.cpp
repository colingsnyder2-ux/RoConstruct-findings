// roc 2010-06 009e7110  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7110
//
// 009e7110  a1dc05c200           mov eax, dword ptr [0xc205dc]
// 009e7115  50                   push eax
// 009e7116  e87f08dcff           call 0x7a799a
// 009e711b  83c404               add esp, 4
// 009e711e  c705c005c2001809a000 mov dword ptr [0xc205c0], 0xa00918
// 009e7128  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7110(int);
void func_009e7110()
{
    G4_func_009e7110(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
