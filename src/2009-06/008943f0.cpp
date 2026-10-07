// roc 2009-06 008943f0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008943f0
//
// 008943f0  a144a4a300           mov eax, dword ptr [0xa3a444]
// 008943f5  50                   push eax
// 008943f6  e83746e8ff           call 0x718a32
// 008943fb  83c404               add esp, 4
// 008943fe  c7052ca4a30030d28a00 mov dword ptr [0xa3a42c], 0x8ad230
// 00894408  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008943f0(int);
void func_008943f0()
{
    G4_func_008943f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
