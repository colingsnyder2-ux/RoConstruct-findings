// roc 2009-06 00895cf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895cf0
//
// 00895cf0  a15ceda300           mov eax, dword ptr [0xa3ed5c]
// 00895cf5  50                   push eax
// 00895cf6  e8372de8ff           call 0x718a32
// 00895cfb  83c404               add esp, 4
// 00895cfe  c70544eda30030d28a00 mov dword ptr [0xa3ed44], 0x8ad230
// 00895d08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895cf0(int);
void func_00895cf0()
{
    G4_func_00895cf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
