// roc 2009-06 0089c020  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c020
//
// 0089c020  a154eba400           mov eax, dword ptr [0xa4eb54]
// 0089c025  50                   push eax
// 0089c026  e807cae7ff           call 0x718a32
// 0089c02b  83c404               add esp, 4
// 0089c02e  c7053ceba40030d28a00 mov dword ptr [0xa4eb3c], 0x8ad230
// 0089c038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c020(int);
void func_0089c020()
{
    G4_func_0089c020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
