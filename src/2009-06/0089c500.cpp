// roc 2009-06 0089c500  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c500
//
// 0089c500  a164eda400           mov eax, dword ptr [0xa4ed64]
// 0089c505  50                   push eax
// 0089c506  e827c5e7ff           call 0x718a32
// 0089c50b  83c404               add esp, 4
// 0089c50e  c7054ceda40030d28a00 mov dword ptr [0xa4ed4c], 0x8ad230
// 0089c518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c500(int);
void func_0089c500()
{
    G4_func_0089c500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
