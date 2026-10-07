// roc 2009-06 0089c3e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c3e0
//
// 0089c3e0  a134f0a400           mov eax, dword ptr [0xa4f034]
// 0089c3e5  50                   push eax
// 0089c3e6  e847c6e7ff           call 0x718a32
// 0089c3eb  83c404               add esp, 4
// 0089c3ee  c7051cf0a40030d28a00 mov dword ptr [0xa4f01c], 0x8ad230
// 0089c3f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c3e0(int);
void func_0089c3e0()
{
    G4_func_0089c3e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
