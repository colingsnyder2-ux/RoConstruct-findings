// roc 2009-06 0089b170  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b170
//
// 0089b170  a1c4d4a400           mov eax, dword ptr [0xa4d4c4]
// 0089b175  50                   push eax
// 0089b176  e8b7d8e7ff           call 0x718a32
// 0089b17b  83c404               add esp, 4
// 0089b17e  c705a8d4a40030d28a00 mov dword ptr [0xa4d4a8], 0x8ad230
// 0089b188  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b170(int);
void func_0089b170()
{
    G4_func_0089b170(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
