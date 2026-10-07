// roc 2009-06 00894520  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894520
//
// 00894520  a108afa300           mov eax, dword ptr [0xa3af08]
// 00894525  50                   push eax
// 00894526  e80745e8ff           call 0x718a32
// 0089452b  83c404               add esp, 4
// 0089452e  c705ecaea30030d28a00 mov dword ptr [0xa3aeec], 0x8ad230
// 00894538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894520(int);
void func_00894520()
{
    G4_func_00894520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
