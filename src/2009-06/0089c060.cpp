// roc 2009-06 0089c060  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c060
//
// 0089c060  a1f4eba400           mov eax, dword ptr [0xa4ebf4]
// 0089c065  50                   push eax
// 0089c066  e8c7c9e7ff           call 0x718a32
// 0089c06b  83c404               add esp, 4
// 0089c06e  c705dceba40030d28a00 mov dword ptr [0xa4ebdc], 0x8ad230
// 0089c078  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c060(int);
void func_0089c060()
{
    G4_func_0089c060(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
