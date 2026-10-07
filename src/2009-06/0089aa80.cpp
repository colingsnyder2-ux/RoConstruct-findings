// roc 2009-06 0089aa80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aa80
//
// 0089aa80  a160cca400           mov eax, dword ptr [0xa4cc60]
// 0089aa85  50                   push eax
// 0089aa86  e8a7dfe7ff           call 0x718a32
// 0089aa8b  83c404               add esp, 4
// 0089aa8e  c70548cca40030d28a00 mov dword ptr [0xa4cc48], 0x8ad230
// 0089aa98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aa80(int);
void func_0089aa80()
{
    G4_func_0089aa80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
