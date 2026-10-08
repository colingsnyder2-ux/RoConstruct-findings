// roc 2007-08 0077b280  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b280
//
// 0077b280  a17c558c00           mov eax, dword ptr [0x8c557c]
// 0077b285  50                   push eax
// 0077b286  e8d749ebff           call 0x62fc62
// 0077b28b  83c404               add esp, 4
// 0077b28e  c70564558c00b4707800 mov dword ptr [0x8c5564], 0x7870b4
// 0077b298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b280(int);
void func_0077b280()
{
    G4_func_0077b280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
