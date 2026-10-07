// roc 2009-06 0089a440  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a440
//
// 0089a440  a1fcc2a400           mov eax, dword ptr [0xa4c2fc]
// 0089a445  50                   push eax
// 0089a446  e8e7e5e7ff           call 0x718a32
// 0089a44b  83c404               add esp, 4
// 0089a44e  c705e4c2a40030d28a00 mov dword ptr [0xa4c2e4], 0x8ad230
// 0089a458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a440(int);
void func_0089a440()
{
    G4_func_0089a440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
