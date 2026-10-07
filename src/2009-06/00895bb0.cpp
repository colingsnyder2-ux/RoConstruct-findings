// roc 2009-06 00895bb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895bb0
//
// 00895bb0  a190eca300           mov eax, dword ptr [0xa3ec90]
// 00895bb5  50                   push eax
// 00895bb6  e8772ee8ff           call 0x718a32
// 00895bbb  83c404               add esp, 4
// 00895bbe  c70574eca30030d28a00 mov dword ptr [0xa3ec74], 0x8ad230
// 00895bc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895bb0(int);
void func_00895bb0()
{
    G4_func_00895bb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
