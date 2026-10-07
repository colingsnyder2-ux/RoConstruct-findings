// roc 2009-06 00897060  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00897060
//
// 00897060  a13437a400           mov eax, dword ptr [0xa43734]
// 00897065  50                   push eax
// 00897066  e8c719e8ff           call 0x718a32
// 0089706b  83c404               add esp, 4
// 0089706e  c7051837a40030d28a00 mov dword ptr [0xa43718], 0x8ad230
// 00897078  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00897060(int);
void func_00897060()
{
    G4_func_00897060(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
