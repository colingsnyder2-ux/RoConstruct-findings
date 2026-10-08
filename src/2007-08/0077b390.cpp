// roc 2007-08 0077b390  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b390
//
// 0077b390  a120588c00           mov eax, dword ptr [0x8c5820]
// 0077b395  50                   push eax
// 0077b396  e8c748ebff           call 0x62fc62
// 0077b39b  83c404               add esp, 4
// 0077b39e  c70508588c00b4707800 mov dword ptr [0x8c5808], 0x7870b4
// 0077b3a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b390(int);
void func_0077b390()
{
    G4_func_0077b390(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
