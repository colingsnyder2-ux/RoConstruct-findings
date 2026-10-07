// roc 2009-06 0089aa00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aa00
//
// 0089aa00  a1b4cca400           mov eax, dword ptr [0xa4ccb4]
// 0089aa05  50                   push eax
// 0089aa06  e827e0e7ff           call 0x718a32
// 0089aa0b  83c404               add esp, 4
// 0089aa0e  c7059ccca40030d28a00 mov dword ptr [0xa4cc9c], 0x8ad230
// 0089aa18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aa00(int);
void func_0089aa00()
{
    G4_func_0089aa00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
