// roc 2009-06 00895c70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895c70
//
// 00895c70  a198eda300           mov eax, dword ptr [0xa3ed98]
// 00895c75  50                   push eax
// 00895c76  e8b72de8ff           call 0x718a32
// 00895c7b  83c404               add esp, 4
// 00895c7e  c70580eda30030d28a00 mov dword ptr [0xa3ed80], 0x8ad230
// 00895c88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895c70(int);
void func_00895c70()
{
    G4_func_00895c70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
