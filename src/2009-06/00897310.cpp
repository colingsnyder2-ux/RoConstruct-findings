// roc 2009-06 00897310  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897310
//
// 00897310  a1383da400           mov eax, dword ptr [0xa43d38]
// 00897315  50                   push eax
// 00897316  e81717e8ff           call 0x718a32
// 0089731b  83c404               add esp, 4
// 0089731e  c705203da40030d28a00 mov dword ptr [0xa43d20], 0x8ad230
// 00897328  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897310(int);
void func_00897310()
{
    G4_func_00897310(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
