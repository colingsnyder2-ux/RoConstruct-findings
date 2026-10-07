// roc 2010-06 009e7070  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7070
//
// 009e7070  a14007c200           mov eax, dword ptr [0xc20740]
// 009e7075  50                   push eax
// 009e7076  e81f09dcff           call 0x7a799a
// 009e707b  83c404               add esp, 4
// 009e707e  c7052407c2001809a000 mov dword ptr [0xc20724], 0xa00918
// 009e7088  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7070(int);
void func_009e7070()
{
    G4_func_009e7070(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
