// roc 2009-06 00894480  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00894480
//
// 00894480  a174afa300           mov eax, dword ptr [0xa3af74]
// 00894485  50                   push eax
// 00894486  e8a745e8ff           call 0x718a32
// 0089448b  83c404               add esp, 4
// 0089448e  c70558afa30030d28a00 mov dword ptr [0xa3af58], 0x8ad230
// 00894498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00894480(int);
void func_00894480()
{
    G4_func_00894480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
