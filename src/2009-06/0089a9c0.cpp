// roc 2009-06 0089a9c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a9c0
//
// 0089a9c0  a104cea400           mov eax, dword ptr [0xa4ce04]
// 0089a9c5  50                   push eax
// 0089a9c6  e867e0e7ff           call 0x718a32
// 0089a9cb  83c404               add esp, 4
// 0089a9ce  c705e8cda40030d28a00 mov dword ptr [0xa4cde8], 0x8ad230
// 0089a9d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a9c0(int);
void func_0089a9c0()
{
    G4_func_0089a9c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
