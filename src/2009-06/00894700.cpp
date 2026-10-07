// roc 2009-06 00894700  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894700
//
// 00894700  a194afa300           mov eax, dword ptr [0xa3af94]
// 00894705  50                   push eax
// 00894706  e82743e8ff           call 0x718a32
// 0089470b  83c404               add esp, 4
// 0089470e  c7057cafa30030d28a00 mov dword ptr [0xa3af7c], 0x8ad230
// 00894718  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894700(int);
void func_00894700()
{
    G4_func_00894700(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
