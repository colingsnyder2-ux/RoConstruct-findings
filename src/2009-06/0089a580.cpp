// roc 2009-06 0089a580  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a580
//
// 0089a580  a130c4a400           mov eax, dword ptr [0xa4c430]
// 0089a585  50                   push eax
// 0089a586  e8a7e4e7ff           call 0x718a32
// 0089a58b  83c404               add esp, 4
// 0089a58e  c70518c4a40030d28a00 mov dword ptr [0xa4c418], 0x8ad230
// 0089a598  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a580(int);
void func_0089a580()
{
    G4_func_0089a580(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
