// roc 2009-06 0089a260  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a260
//
// 0089a260  a16cbda400           mov eax, dword ptr [0xa4bd6c]
// 0089a265  50                   push eax
// 0089a266  e8c7e7e7ff           call 0x718a32
// 0089a26b  83c404               add esp, 4
// 0089a26e  c70554bda40030d28a00 mov dword ptr [0xa4bd54], 0x8ad230
// 0089a278  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a260(int);
void func_0089a260()
{
    G4_func_0089a260(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
