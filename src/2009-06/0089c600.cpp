// roc 2009-06 0089c600  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c600
//
// 0089c600  a180eda400           mov eax, dword ptr [0xa4ed80]
// 0089c605  50                   push eax
// 0089c606  e827c4e7ff           call 0x718a32
// 0089c60b  83c404               add esp, 4
// 0089c60e  c70568eda40030d28a00 mov dword ptr [0xa4ed68], 0x8ad230
// 0089c618  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c600(int);
void func_0089c600()
{
    G4_func_0089c600(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
