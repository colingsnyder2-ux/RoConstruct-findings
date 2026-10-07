// roc 2009-06 00895cd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895cd0
//
// 00895cd0  a148eca300           mov eax, dword ptr [0xa3ec48]
// 00895cd5  50                   push eax
// 00895cd6  e8572de8ff           call 0x718a32
// 00895cdb  83c404               add esp, 4
// 00895cde  c70530eca30030d28a00 mov dword ptr [0xa3ec30], 0x8ad230
// 00895ce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895cd0(int);
void func_00895cd0()
{
    G4_func_00895cd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
