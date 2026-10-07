// roc 2009-06 00894500  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894500
//
// 00894500  a12cafa300           mov eax, dword ptr [0xa3af2c]
// 00894505  50                   push eax
// 00894506  e82745e8ff           call 0x718a32
// 0089450b  83c404               add esp, 4
// 0089450e  c70510afa30030d28a00 mov dword ptr [0xa3af10], 0x8ad230
// 00894518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894500(int);
void func_00894500()
{
    G4_func_00894500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
