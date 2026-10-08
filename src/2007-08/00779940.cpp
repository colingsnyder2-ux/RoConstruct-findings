// roc 2007-08 00779940  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779940
//
// 00779940  a18c178c00           mov eax, dword ptr [0x8c178c]
// 00779945  50                   push eax
// 00779946  e81763ebff           call 0x62fc62
// 0077994b  83c404               add esp, 4
// 0077994e  c70574178c00b4707800 mov dword ptr [0x8c1774], 0x7870b4
// 00779958  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779940(int);
void func_00779940()
{
    G4_func_00779940(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
