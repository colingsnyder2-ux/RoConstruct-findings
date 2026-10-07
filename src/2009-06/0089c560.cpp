// roc 2009-06 0089c560  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c560
//
// 0089c560  a118f0a400           mov eax, dword ptr [0xa4f018]
// 0089c565  50                   push eax
// 0089c566  e8c7c4e7ff           call 0x718a32
// 0089c56b  83c404               add esp, 4
// 0089c56e  c70500f0a40030d28a00 mov dword ptr [0xa4f000], 0x8ad230
// 0089c578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c560(int);
void func_0089c560()
{
    G4_func_0089c560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
