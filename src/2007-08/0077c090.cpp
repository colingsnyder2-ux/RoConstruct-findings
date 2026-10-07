// roc 2007-08 0077c090  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c090
//
// 0077c090  a1dc738c00           mov eax, dword ptr [0x8c73dc]
// 0077c095  50                   push eax
// 0077c096  e8c73bebff           call 0x62fc62
// 0077c09b  83c404               add esp, 4
// 0077c09e  c705c4738c00b4707800 mov dword ptr [0x8c73c4], 0x7870b4
// 0077c0a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c090(int);
void func_0077c090()
{
    G4_func_0077c090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
