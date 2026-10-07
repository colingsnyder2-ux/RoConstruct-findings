// roc 2009-06 00895c10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895c10
//
// 00895c10  a1f4eba300           mov eax, dword ptr [0xa3ebf4]
// 00895c15  50                   push eax
// 00895c16  e8172ee8ff           call 0x718a32
// 00895c1b  83c404               add esp, 4
// 00895c1e  c705dceba30030d28a00 mov dword ptr [0xa3ebdc], 0x8ad230
// 00895c28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895c10(int);
void func_00895c10()
{
    G4_func_00895c10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
