// roc 2009-06 00897020  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897020
//
// 00897020  a1b838a400           mov eax, dword ptr [0xa438b8]
// 00897025  50                   push eax
// 00897026  e8071ae8ff           call 0x718a32
// 0089702b  83c404               add esp, 4
// 0089702e  c7059c38a40030d28a00 mov dword ptr [0xa4389c], 0x8ad230
// 00897038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897020(int);
void func_00897020()
{
    G4_func_00897020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
