// roc 2009-06 008945a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008945a0
//
// 008945a0  a15caea300           mov eax, dword ptr [0xa3ae5c]
// 008945a5  50                   push eax
// 008945a6  e88744e8ff           call 0x718a32
// 008945ab  83c404               add esp, 4
// 008945ae  c70540aea30030d28a00 mov dword ptr [0xa3ae40], 0x8ad230
// 008945b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008945a0(int);
void func_008945a0()
{
    G4_func_008945a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
