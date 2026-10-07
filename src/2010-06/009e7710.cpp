// roc 2010-06 009e7710  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7710
//
// 009e7710  a1b40cc200           mov eax, dword ptr [0xc20cb4]
// 009e7715  50                   push eax
// 009e7716  e87f02dcff           call 0x7a799a
// 009e771b  83c404               add esp, 4
// 009e771e  c705980cc2001809a000 mov dword ptr [0xc20c98], 0xa00918
// 009e7728  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7710(int);
void func_009e7710()
{
    G4_func_009e7710(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
