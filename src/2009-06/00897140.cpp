// roc 2009-06 00897140  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897140
//
// 00897140  a1f438a400           mov eax, dword ptr [0xa438f4]
// 00897145  50                   push eax
// 00897146  e8e718e8ff           call 0x718a32
// 0089714b  83c404               add esp, 4
// 0089714e  c705dc38a40030d28a00 mov dword ptr [0xa438dc], 0x8ad230
// 00897158  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897140(int);
void func_00897140()
{
    G4_func_00897140(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
