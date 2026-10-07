// roc 2009-06 00895070  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895070
//
// 00895070  a130d9a300           mov eax, dword ptr [0xa3d930]
// 00895075  50                   push eax
// 00895076  e8b739e8ff           call 0x718a32
// 0089507b  83c404               add esp, 4
// 0089507e  c70518d9a30030d28a00 mov dword ptr [0xa3d918], 0x8ad230
// 00895088  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895070(int);
void func_00895070()
{
    G4_func_00895070(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
