// roc 2009-06 0089c910  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c910
//
// 0089c910  a1acf1a400           mov eax, dword ptr [0xa4f1ac]
// 0089c915  50                   push eax
// 0089c916  e817c1e7ff           call 0x718a32
// 0089c91b  83c404               add esp, 4
// 0089c91e  c70594f1a40030d28a00 mov dword ptr [0xa4f194], 0x8ad230
// 0089c928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c910(int);
void func_0089c910()
{
    G4_func_0089c910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
