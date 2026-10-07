// roc 2009-06 0089bec0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bec0
//
// 0089bec0  a1ace6a400           mov eax, dword ptr [0xa4e6ac]
// 0089bec5  50                   push eax
// 0089bec6  e867cbe7ff           call 0x718a32
// 0089becb  83c404               add esp, 4
// 0089bece  c70594e6a40030d28a00 mov dword ptr [0xa4e694], 0x8ad230
// 0089bed8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bec0(int);
void func_0089bec0()
{
    G4_func_0089bec0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
