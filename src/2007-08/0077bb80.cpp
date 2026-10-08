// roc 2007-08 0077bb80  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077bb80
//
// 0077bb80  a144628c00           mov eax, dword ptr [0x8c6244]
// 0077bb85  50                   push eax
// 0077bb86  e8d740ebff           call 0x62fc62
// 0077bb8b  83c404               add esp, 4
// 0077bb8e  c7052c628c00b4707800 mov dword ptr [0x8c622c], 0x7870b4
// 0077bb98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077bb80(int);
void func_0077bb80()
{
    G4_func_0077bb80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
