// roc 2009-06 008944c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008944c0
//
// 008944c0  a16cada300           mov eax, dword ptr [0xa3ad6c]
// 008944c5  50                   push eax
// 008944c6  e86745e8ff           call 0x718a32
// 008944cb  83c404               add esp, 4
// 008944ce  c70550ada30030d28a00 mov dword ptr [0xa3ad50], 0x8ad230
// 008944d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008944c0(int);
void func_008944c0()
{
    G4_func_008944c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
