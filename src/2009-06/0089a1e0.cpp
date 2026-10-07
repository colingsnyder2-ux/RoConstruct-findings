// roc 2009-06 0089a1e0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a1e0
//
// 0089a1e0  a150bda400           mov eax, dword ptr [0xa4bd50]
// 0089a1e5  50                   push eax
// 0089a1e6  e847e8e7ff           call 0x718a32
// 0089a1eb  83c404               add esp, 4
// 0089a1ee  c70538bda40030d28a00 mov dword ptr [0xa4bd38], 0x8ad230
// 0089a1f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a1e0(int);
void func_0089a1e0()
{
    G4_func_0089a1e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
