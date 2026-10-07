// roc 2010-06 009e7430  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7430
//
// 009e7430  a1080ac200           mov eax, dword ptr [0xc20a08]
// 009e7435  50                   push eax
// 009e7436  e85f05dcff           call 0x7a799a
// 009e743b  83c404               add esp, 4
// 009e743e  c705ec09c2001809a000 mov dword ptr [0xc209ec], 0xa00918
// 009e7448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7430(int);
void func_009e7430()
{
    G4_func_009e7430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
