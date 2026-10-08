// roc 2007-08 0077b330  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b330
//
// 0077b330  a1c0578c00           mov eax, dword ptr [0x8c57c0]
// 0077b335  50                   push eax
// 0077b336  e82749ebff           call 0x62fc62
// 0077b33b  83c404               add esp, 4
// 0077b33e  c705a4578c00b4707800 mov dword ptr [0x8c57a4], 0x7870b4
// 0077b348  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b330(int);
void func_0077b330()
{
    G4_func_0077b330(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
