// roc 2009-06 0089c580  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c580
//
// 0089c580  a144eea400           mov eax, dword ptr [0xa4ee44]
// 0089c585  50                   push eax
// 0089c586  e8a7c4e7ff           call 0x718a32
// 0089c58b  83c404               add esp, 4
// 0089c58e  c7052ceea40030d28a00 mov dword ptr [0xa4ee2c], 0x8ad230
// 0089c598  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c580(int);
void func_0089c580()
{
    G4_func_0089c580(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
