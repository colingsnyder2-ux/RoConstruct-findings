// roc 2009-06 00895b10  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895b10
//
// 00895b10  a1d0eca300           mov eax, dword ptr [0xa3ecd0]
// 00895b15  50                   push eax
// 00895b16  e8172fe8ff           call 0x718a32
// 00895b1b  83c404               add esp, 4
// 00895b1e  c705b8eca30030d28a00 mov dword ptr [0xa3ecb8], 0x8ad230
// 00895b28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895b10(int);
void func_00895b10()
{
    G4_func_00895b10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
