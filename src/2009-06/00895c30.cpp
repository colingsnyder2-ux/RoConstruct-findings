// roc 2009-06 00895c30  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895c30
//
// 00895c30  a140eda300           mov eax, dword ptr [0xa3ed40]
// 00895c35  50                   push eax
// 00895c36  e8f72de8ff           call 0x718a32
// 00895c3b  83c404               add esp, 4
// 00895c3e  c70528eda30030d28a00 mov dword ptr [0xa3ed28], 0x8ad230
// 00895c48  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895c30(int);
void func_00895c30()
{
    G4_func_00895c30(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
