// roc 2009-06 00895030  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895030
//
// 00895030  a194d9a300           mov eax, dword ptr [0xa3d994]
// 00895035  50                   push eax
// 00895036  e8f739e8ff           call 0x718a32
// 0089503b  83c404               add esp, 4
// 0089503e  c7057cd9a30030d28a00 mov dword ptr [0xa3d97c], 0x8ad230
// 00895048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895030(int);
void func_00895030()
{
    G4_func_00895030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
