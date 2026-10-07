// roc 2009-06 00894560  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894560
//
// 00894560  a1c0aea300           mov eax, dword ptr [0xa3aec0]
// 00894565  50                   push eax
// 00894566  e8c744e8ff           call 0x718a32
// 0089456b  83c404               add esp, 4
// 0089456e  c705a4aea30030d28a00 mov dword ptr [0xa3aea4], 0x8ad230
// 00894578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894560(int);
void func_00894560()
{
    G4_func_00894560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
