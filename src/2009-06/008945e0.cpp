// roc 2009-06 008945e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008945e0
//
// 008945e0  a1b0afa300           mov eax, dword ptr [0xa3afb0]
// 008945e5  50                   push eax
// 008945e6  e84744e8ff           call 0x718a32
// 008945eb  83c404               add esp, 4
// 008945ee  c70598afa30030d28a00 mov dword ptr [0xa3af98], 0x8ad230
// 008945f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008945e0(int);
void func_008945e0()
{
    G4_func_008945e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
