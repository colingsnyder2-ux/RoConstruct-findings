// roc 2009-06 00895090  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895090
//
// 00895090  a114d9a300           mov eax, dword ptr [0xa3d914]
// 00895095  50                   push eax
// 00895096  e89739e8ff           call 0x718a32
// 0089509b  83c404               add esp, 4
// 0089509e  c705fcd8a30030d28a00 mov dword ptr [0xa3d8fc], 0x8ad230
// 008950a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895090(int);
void func_00895090()
{
    G4_func_00895090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
