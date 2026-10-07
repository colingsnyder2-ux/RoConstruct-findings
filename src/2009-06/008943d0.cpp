// roc 2009-06 008943d0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008943d0
//
// 008943d0  a160a4a300           mov eax, dword ptr [0xa3a460]
// 008943d5  50                   push eax
// 008943d6  e85746e8ff           call 0x718a32
// 008943db  83c404               add esp, 4
// 008943de  c70548a4a30030d28a00 mov dword ptr [0xa3a448], 0x8ad230
// 008943e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008943d0(int);
void func_008943d0()
{
    G4_func_008943d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
