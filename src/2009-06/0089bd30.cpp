// roc 2009-06 0089bd30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bd30
//
// 0089bd30  a12ce5a400           mov eax, dword ptr [0xa4e52c]
// 0089bd35  50                   push eax
// 0089bd36  e8f7cce7ff           call 0x718a32
// 0089bd3b  83c404               add esp, 4
// 0089bd3e  c70514e5a40030d28a00 mov dword ptr [0xa4e514], 0x8ad230
// 0089bd48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bd30(int);
void func_0089bd30()
{
    G4_func_0089bd30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
