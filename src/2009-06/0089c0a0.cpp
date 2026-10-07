// roc 2009-06 0089c0a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c0a0
//
// 0089c0a0  a1d4e9a400           mov eax, dword ptr [0xa4e9d4]
// 0089c0a5  50                   push eax
// 0089c0a6  e887c9e7ff           call 0x718a32
// 0089c0ab  83c404               add esp, 4
// 0089c0ae  c705bce9a40030d28a00 mov dword ptr [0xa4e9bc], 0x8ad230
// 0089c0b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c0a0(int);
void func_0089c0a0()
{
    G4_func_0089c0a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
