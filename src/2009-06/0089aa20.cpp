// roc 2009-06 0089aa20  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aa20
//
// 0089aa20  a118cfa400           mov eax, dword ptr [0xa4cf18]
// 0089aa25  50                   push eax
// 0089aa26  e807e0e7ff           call 0x718a32
// 0089aa2b  83c404               add esp, 4
// 0089aa2e  c70500cfa40030d28a00 mov dword ptr [0xa4cf00], 0x8ad230
// 0089aa38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aa20(int);
void func_0089aa20()
{
    G4_func_0089aa20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
