// roc 2009-06 008955c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008955c0
//
// 008955c0  a194dca300           mov eax, dword ptr [0xa3dc94]
// 008955c5  50                   push eax
// 008955c6  e86734e8ff           call 0x718a32
// 008955cb  83c404               add esp, 4
// 008955ce  c7057cdca30030d28a00 mov dword ptr [0xa3dc7c], 0x8ad230
// 008955d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008955c0(int);
void func_008955c0()
{
    G4_func_008955c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
