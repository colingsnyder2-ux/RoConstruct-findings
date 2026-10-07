// roc 2009-06 008955e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008955e0
//
// 008955e0  a1a4dda300           mov eax, dword ptr [0xa3dda4]
// 008955e5  50                   push eax
// 008955e6  e84734e8ff           call 0x718a32
// 008955eb  83c404               add esp, 4
// 008955ee  c7058cdda30030d28a00 mov dword ptr [0xa3dd8c], 0x8ad230
// 008955f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008955e0(int);
void func_008955e0()
{
    G4_func_008955e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
