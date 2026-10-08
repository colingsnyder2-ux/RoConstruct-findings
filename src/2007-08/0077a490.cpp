// roc 2007-08 0077a490  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a490
//
// 0077a490  a1e42f8c00           mov eax, dword ptr [0x8c2fe4]
// 0077a495  50                   push eax
// 0077a496  e8c757ebff           call 0x62fc62
// 0077a49b  83c404               add esp, 4
// 0077a49e  c705c82f8c00b4707800 mov dword ptr [0x8c2fc8], 0x7870b4
// 0077a4a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a490(int);
void func_0077a490()
{
    G4_func_0077a490(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
