// roc 2009-06 0089a280  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a280
//
// 0089a280  a1a4bda400           mov eax, dword ptr [0xa4bda4]
// 0089a285  50                   push eax
// 0089a286  e8a7e7e7ff           call 0x718a32
// 0089a28b  83c404               add esp, 4
// 0089a28e  c7058cbda40030d28a00 mov dword ptr [0xa4bd8c], 0x8ad230
// 0089a298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a280(int);
void func_0089a280()
{
    G4_func_0089a280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
