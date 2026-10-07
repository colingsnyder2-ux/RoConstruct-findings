// roc 2009-06 0089b310  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b310
//
// 0089b310  a1acd7a400           mov eax, dword ptr [0xa4d7ac]
// 0089b315  50                   push eax
// 0089b316  e817d7e7ff           call 0x718a32
// 0089b31b  83c404               add esp, 4
// 0089b31e  c70594d7a40030d28a00 mov dword ptr [0xa4d794], 0x8ad230
// 0089b328  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b310(int);
void func_0089b310()
{
    G4_func_0089b310(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
