// roc 2009-06 0089a1c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a1c0
//
// 0089a1c0  a1d8bea400           mov eax, dword ptr [0xa4bed8]
// 0089a1c5  50                   push eax
// 0089a1c6  e867e8e7ff           call 0x718a32
// 0089a1cb  83c404               add esp, 4
// 0089a1ce  c705bcbea40030d28a00 mov dword ptr [0xa4bebc], 0x8ad230
// 0089a1d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a1c0(int);
void func_0089a1c0()
{
    G4_func_0089a1c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
