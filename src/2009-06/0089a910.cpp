// roc 2009-06 0089a910  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a910
//
// 0089a910  a118cca400           mov eax, dword ptr [0xa4cc18]
// 0089a915  50                   push eax
// 0089a916  e817e1e7ff           call 0x718a32
// 0089a91b  83c404               add esp, 4
// 0089a91e  c70500cca40030d28a00 mov dword ptr [0xa4cc00], 0x8ad230
// 0089a928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a910(int);
void func_0089a910()
{
    G4_func_0089a910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
