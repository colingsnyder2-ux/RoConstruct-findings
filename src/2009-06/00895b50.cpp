// roc 2009-06 00895b50  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895b50
//
// 00895b50  a178eda300           mov eax, dword ptr [0xa3ed78]
// 00895b55  50                   push eax
// 00895b56  e8d72ee8ff           call 0x718a32
// 00895b5b  83c404               add esp, 4
// 00895b5e  c70560eda30030d28a00 mov dword ptr [0xa3ed60], 0x8ad230
// 00895b68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895b50(int);
void func_00895b50()
{
    G4_func_00895b50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
