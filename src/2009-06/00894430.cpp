// roc 2009-06 00894430  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894430
//
// 00894430  a1b4a4a300           mov eax, dword ptr [0xa3a4b4]
// 00894435  50                   push eax
// 00894436  e8f745e8ff           call 0x718a32
// 0089443b  83c404               add esp, 4
// 0089443e  c7059ca4a30030d28a00 mov dword ptr [0xa3a49c], 0x8ad230
// 00894448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894430(int);
void func_00894430()
{
    G4_func_00894430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
