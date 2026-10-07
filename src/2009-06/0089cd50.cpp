// roc 2009-06 0089cd50  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cd50
//
// 0089cd50  a160f9a400           mov eax, dword ptr [0xa4f960]
// 0089cd55  50                   push eax
// 0089cd56  e8d7bce7ff           call 0x718a32
// 0089cd5b  83c404               add esp, 4
// 0089cd5e  c70548f9a40030d28a00 mov dword ptr [0xa4f948], 0x8ad230
// 0089cd68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cd50(int);
void func_0089cd50()
{
    G4_func_0089cd50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
