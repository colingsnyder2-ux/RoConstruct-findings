// roc 2009-06 0089cd70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cd70
//
// 0089cd70  a150fba400           mov eax, dword ptr [0xa4fb50]
// 0089cd75  50                   push eax
// 0089cd76  e8b7bce7ff           call 0x718a32
// 0089cd7b  83c404               add esp, 4
// 0089cd7e  c70538fba40030d28a00 mov dword ptr [0xa4fb38], 0x8ad230
// 0089cd88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cd70(int);
void func_0089cd70()
{
    G4_func_0089cd70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
