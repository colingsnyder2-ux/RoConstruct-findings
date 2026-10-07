// roc 2009-06 0089a500  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a500
//
// 0089a500  a1c0c3a400           mov eax, dword ptr [0xa4c3c0]
// 0089a505  50                   push eax
// 0089a506  e827e5e7ff           call 0x718a32
// 0089a50b  83c404               add esp, 4
// 0089a50e  c705a8c3a40030d28a00 mov dword ptr [0xa4c3a8], 0x8ad230
// 0089a518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a500(int);
void func_0089a500()
{
    G4_func_0089a500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
