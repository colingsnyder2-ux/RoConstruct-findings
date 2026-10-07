// roc 2009-06 00895c90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895c90
//
// 00895c90  a1b4eda300           mov eax, dword ptr [0xa3edb4]
// 00895c95  50                   push eax
// 00895c96  e8972de8ff           call 0x718a32
// 00895c9b  83c404               add esp, 4
// 00895c9e  c7059ceda30030d28a00 mov dword ptr [0xa3ed9c], 0x8ad230
// 00895ca8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895c90(int);
void func_00895c90()
{
    G4_func_00895c90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
