// roc 2010-06 009db710  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db710
//
// 009db710  a1cc14c000           mov eax, dword ptr [0xc014cc]
// 009db715  50                   push eax
// 009db716  e87fc2dcff           call 0x7a799a
// 009db71b  83c404               add esp, 4
// 009db71e  c705b014c0001809a000 mov dword ptr [0xc014b0], 0xa00918
// 009db728  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db710(int);
void func_009db710()
{
    G4_func_009db710(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
