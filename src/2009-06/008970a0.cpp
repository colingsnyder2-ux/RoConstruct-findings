// roc 2009-06 008970a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008970a0
//
// 008970a0  a1743aa400           mov eax, dword ptr [0xa43a74]
// 008970a5  50                   push eax
// 008970a6  e88719e8ff           call 0x718a32
// 008970ab  83c404               add esp, 4
// 008970ae  c7055c3aa40030d28a00 mov dword ptr [0xa43a5c], 0x8ad230
// 008970b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008970a0(int);
void func_008970a0()
{
    G4_func_008970a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
