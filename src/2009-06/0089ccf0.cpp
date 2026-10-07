// roc 2009-06 0089ccf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ccf0
//
// 0089ccf0  a19cf8a400           mov eax, dword ptr [0xa4f89c]
// 0089ccf5  50                   push eax
// 0089ccf6  e837bde7ff           call 0x718a32
// 0089ccfb  83c404               add esp, 4
// 0089ccfe  c70584f8a40030d28a00 mov dword ptr [0xa4f884], 0x8ad230
// 0089cd08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ccf0(int);
void func_0089ccf0()
{
    G4_func_0089ccf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
