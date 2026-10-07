// roc 2009-06 00893b80  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893b80
//
// 00893b80  a144a0a300           mov eax, dword ptr [0xa3a044]
// 00893b85  50                   push eax
// 00893b86  e8a74ee8ff           call 0x718a32
// 00893b8b  83c404               add esp, 4
// 00893b8e  c7052ca0a30030d28a00 mov dword ptr [0xa3a02c], 0x8ad230
// 00893b98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00893b80(int);
void func_00893b80()
{
    G4_func_00893b80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
