// roc 2009-06 00895b90  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00895b90
//
// 00895b90  a16ceca300           mov eax, dword ptr [0xa3ec6c]
// 00895b95  50                   push eax
// 00895b96  e8972ee8ff           call 0x718a32
// 00895b9b  83c404               add esp, 4
// 00895b9e  c70550eca30030d28a00 mov dword ptr [0xa3ec50], 0x8ad230
// 00895ba8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00895b90(int);
void func_00895b90()
{
    G4_func_00895b90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
