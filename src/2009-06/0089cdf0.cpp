// roc 2009-06 0089cdf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cdf0
//
// 0089cdf0  a108faa400           mov eax, dword ptr [0xa4fa08]
// 0089cdf5  50                   push eax
// 0089cdf6  e837bce7ff           call 0x718a32
// 0089cdfb  83c404               add esp, 4
// 0089cdfe  c705f0f9a40030d28a00 mov dword ptr [0xa4f9f0], 0x8ad230
// 0089ce08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cdf0(int);
void func_0089cdf0()
{
    G4_func_0089cdf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
