// roc 2009-06 0089bf20  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bf20
//
// 0089bf20  a1c0e7a400           mov eax, dword ptr [0xa4e7c0]
// 0089bf25  50                   push eax
// 0089bf26  e807cbe7ff           call 0x718a32
// 0089bf2b  83c404               add esp, 4
// 0089bf2e  c705a8e7a40030d28a00 mov dword ptr [0xa4e7a8], 0x8ad230
// 0089bf38  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bf20(int);
void func_0089bf20()
{
    G4_func_0089bf20(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
