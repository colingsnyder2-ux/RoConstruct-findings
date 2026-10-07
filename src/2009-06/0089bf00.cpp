// roc 2009-06 0089bf00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bf00
//
// 0089bf00  a128e7a400           mov eax, dword ptr [0xa4e728]
// 0089bf05  50                   push eax
// 0089bf06  e827cbe7ff           call 0x718a32
// 0089bf0b  83c404               add esp, 4
// 0089bf0e  c70510e7a40030d28a00 mov dword ptr [0xa4e710], 0x8ad230
// 0089bf18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bf00(int);
void func_0089bf00()
{
    G4_func_0089bf00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
