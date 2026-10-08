// roc 2007-08 0077be80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077be80
//
// 0077be80  a1f86d8c00           mov eax, dword ptr [0x8c6df8]
// 0077be85  50                   push eax
// 0077be86  e8d73debff           call 0x62fc62
// 0077be8b  83c404               add esp, 4
// 0077be8e  c705e06d8c00b4707800 mov dword ptr [0x8c6de0], 0x7870b4
// 0077be98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077be80(int);
void func_0077be80()
{
    G4_func_0077be80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
