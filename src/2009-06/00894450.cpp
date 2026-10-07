// roc 2009-06 00894450  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894450
//
// 00894450  a198a4a300           mov eax, dword ptr [0xa3a498]
// 00894455  50                   push eax
// 00894456  e8d745e8ff           call 0x718a32
// 0089445b  83c404               add esp, 4
// 0089445e  c70580a4a30030d28a00 mov dword ptr [0xa3a480], 0x8ad230
// 00894468  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894450(int);
void func_00894450()
{
    G4_func_00894450(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
