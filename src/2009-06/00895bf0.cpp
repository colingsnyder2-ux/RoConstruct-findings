// roc 2009-06 00895bf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895bf0
//
// 00895bf0  a1ececa300           mov eax, dword ptr [0xa3ecec]
// 00895bf5  50                   push eax
// 00895bf6  e8372ee8ff           call 0x718a32
// 00895bfb  83c404               add esp, 4
// 00895bfe  c705d4eca30030d28a00 mov dword ptr [0xa3ecd4], 0x8ad230
// 00895c08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895bf0(int);
void func_00895bf0()
{
    G4_func_00895bf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
