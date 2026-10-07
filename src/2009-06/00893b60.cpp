// roc 2009-06 00893b60  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893b60
//
// 00893b60  a160a0a300           mov eax, dword ptr [0xa3a060]
// 00893b65  50                   push eax
// 00893b66  e8c74ee8ff           call 0x718a32
// 00893b6b  83c404               add esp, 4
// 00893b6e  c70548a0a30030d28a00 mov dword ptr [0xa3a048], 0x8ad230
// 00893b78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00893b60(int);
void func_00893b60()
{
    G4_func_00893b60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
