// roc 2009-06 0089cc90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cc90
//
// 0089cc90  a120f8a400           mov eax, dword ptr [0xa4f820]
// 0089cc95  50                   push eax
// 0089cc96  e897bde7ff           call 0x718a32
// 0089cc9b  83c404               add esp, 4
// 0089cc9e  c70508f8a40030d28a00 mov dword ptr [0xa4f808], 0x8ad230
// 0089cca8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cc90(int);
void func_0089cc90()
{
    G4_func_0089cc90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
