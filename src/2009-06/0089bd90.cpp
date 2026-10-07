// roc 2009-06 0089bd90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bd90
//
// 0089bd90  a110e5a400           mov eax, dword ptr [0xa4e510]
// 0089bd95  50                   push eax
// 0089bd96  e897cce7ff           call 0x718a32
// 0089bd9b  83c404               add esp, 4
// 0089bd9e  c705f8e4a40030d28a00 mov dword ptr [0xa4e4f8], 0x8ad230
// 0089bda8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bd90(int);
void func_0089bd90()
{
    G4_func_0089bd90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
