// roc 2009-06 0089a540  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a540
//
// 0089a540  a1dcc3a400           mov eax, dword ptr [0xa4c3dc]
// 0089a545  50                   push eax
// 0089a546  e8e7e4e7ff           call 0x718a32
// 0089a54b  83c404               add esp, 4
// 0089a54e  c705c4c3a40030d28a00 mov dword ptr [0xa4c3c4], 0x8ad230
// 0089a558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a540(int);
void func_0089a540()
{
    G4_func_0089a540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
