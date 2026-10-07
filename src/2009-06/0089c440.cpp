// roc 2009-06 0089c440  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c440
//
// 0089c440  a184eea400           mov eax, dword ptr [0xa4ee84]
// 0089c445  50                   push eax
// 0089c446  e8e7c5e7ff           call 0x718a32
// 0089c44b  83c404               add esp, 4
// 0089c44e  c7056ceea40030d28a00 mov dword ptr [0xa4ee6c], 0x8ad230
// 0089c458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c440(int);
void func_0089c440()
{
    G4_func_0089c440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
