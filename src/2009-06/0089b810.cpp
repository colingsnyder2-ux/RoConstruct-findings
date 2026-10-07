// roc 2009-06 0089b810  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b810
//
// 0089b810  a1c4dea400           mov eax, dword ptr [0xa4dec4]
// 0089b815  50                   push eax
// 0089b816  e817d2e7ff           call 0x718a32
// 0089b81b  83c404               add esp, 4
// 0089b81e  c705acdea40030d28a00 mov dword ptr [0xa4deac], 0x8ad230
// 0089b828  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b810(int);
void func_0089b810()
{
    G4_func_0089b810(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
