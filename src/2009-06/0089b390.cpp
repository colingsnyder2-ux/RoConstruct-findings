// roc 2009-06 0089b390  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b390
//
// 0089b390  a144d5a400           mov eax, dword ptr [0xa4d544]
// 0089b395  50                   push eax
// 0089b396  e897d6e7ff           call 0x718a32
// 0089b39b  83c404               add esp, 4
// 0089b39e  c7052cd5a40030d28a00 mov dword ptr [0xa4d52c], 0x8ad230
// 0089b3a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b390(int);
void func_0089b390()
{
    G4_func_0089b390(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
