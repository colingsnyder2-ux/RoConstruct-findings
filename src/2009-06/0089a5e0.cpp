// roc 2009-06 0089a5e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a5e0
//
// 0089a5e0  a1f8c3a400           mov eax, dword ptr [0xa4c3f8]
// 0089a5e5  50                   push eax
// 0089a5e6  e847e4e7ff           call 0x718a32
// 0089a5eb  83c404               add esp, 4
// 0089a5ee  c705e0c3a40030d28a00 mov dword ptr [0xa4c3e0], 0x8ad230
// 0089a5f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a5e0(int);
void func_0089a5e0()
{
    G4_func_0089a5e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
