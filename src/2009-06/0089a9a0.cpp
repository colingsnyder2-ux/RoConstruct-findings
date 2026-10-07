// roc 2009-06 0089a9a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a9a0
//
// 0089a9a0  a170cda400           mov eax, dword ptr [0xa4cd70]
// 0089a9a5  50                   push eax
// 0089a9a6  e887e0e7ff           call 0x718a32
// 0089a9ab  83c404               add esp, 4
// 0089a9ae  c70558cda40030d28a00 mov dword ptr [0xa4cd58], 0x8ad230
// 0089a9b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a9a0(int);
void func_0089a9a0()
{
    G4_func_0089a9a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
