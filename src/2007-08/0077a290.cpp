// roc 2007-08 0077a290  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a290
//
// 0077a290  a160288c00           mov eax, dword ptr [0x8c2860]
// 0077a295  50                   push eax
// 0077a296  e8c759ebff           call 0x62fc62
// 0077a29b  83c404               add esp, 4
// 0077a29e  c70548288c00b4707800 mov dword ptr [0x8c2848], 0x7870b4
// 0077a2a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a290(int);
void func_0077a290()
{
    G4_func_0077a290(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
