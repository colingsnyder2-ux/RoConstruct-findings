// roc 2009-06 0089a020  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a020
//
// 0089a020  a144bba400           mov eax, dword ptr [0xa4bb44]
// 0089a025  50                   push eax
// 0089a026  e807eae7ff           call 0x718a32
// 0089a02b  83c404               add esp, 4
// 0089a02e  c7052cbba40030d28a00 mov dword ptr [0xa4bb2c], 0x8ad230
// 0089a038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a020(int);
void func_0089a020()
{
    G4_func_0089a020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
