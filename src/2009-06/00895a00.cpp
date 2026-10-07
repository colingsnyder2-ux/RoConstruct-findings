// roc 2009-06 00895a00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895a00
//
// 00895a00  a184eba300           mov eax, dword ptr [0xa3eb84]
// 00895a05  50                   push eax
// 00895a06  e82730e8ff           call 0x718a32
// 00895a0b  83c404               add esp, 4
// 00895a0e  c7056ceba30030d28a00 mov dword ptr [0xa3eb6c], 0x8ad230
// 00895a18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895a00(int);
void func_00895a00()
{
    G4_func_00895a00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
