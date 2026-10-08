// roc 2007-08 0077c030  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c030
//
// 0077c030  a108768c00           mov eax, dword ptr [0x8c7608]
// 0077c035  50                   push eax
// 0077c036  e8273cebff           call 0x62fc62
// 0077c03b  83c404               add esp, 4
// 0077c03e  c705f0758c00b4707800 mov dword ptr [0x8c75f0], 0x7870b4
// 0077c048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c030(int);
void func_0077c030()
{
    G4_func_0077c030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
