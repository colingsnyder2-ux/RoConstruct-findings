// roc 2009-06 00899940  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899940
//
// 00899940  a188b1a400           mov eax, dword ptr [0xa4b188]
// 00899945  50                   push eax
// 00899946  e8e7f0e7ff           call 0x718a32
// 0089994b  83c404               add esp, 4
// 0089994e  c70570b1a40030d28a00 mov dword ptr [0xa4b170], 0x8ad230
// 00899958  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899940(int);
void func_00899940()
{
    G4_func_00899940(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
