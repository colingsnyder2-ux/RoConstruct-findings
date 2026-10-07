// roc 2009-06 0089bcb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bcb0
//
// 0089bcb0  a164e5a400           mov eax, dword ptr [0xa4e564]
// 0089bcb5  50                   push eax
// 0089bcb6  e877cde7ff           call 0x718a32
// 0089bcbb  83c404               add esp, 4
// 0089bcbe  c7054ce5a40030d28a00 mov dword ptr [0xa4e54c], 0x8ad230
// 0089bcc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bcb0(int);
void func_0089bcb0()
{
    G4_func_0089bcb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
