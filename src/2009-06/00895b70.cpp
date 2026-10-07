// roc 2009-06 00895b70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895b70
//
// 00895b70  a1b4eca300           mov eax, dword ptr [0xa3ecb4]
// 00895b75  50                   push eax
// 00895b76  e8b72ee8ff           call 0x718a32
// 00895b7b  83c404               add esp, 4
// 00895b7e  c7059ceca30030d28a00 mov dword ptr [0xa3ec9c], 0x8ad230
// 00895b88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895b70(int);
void func_00895b70()
{
    G4_func_00895b70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
