// roc 2009-06 008972b0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008972b0
//
// 008972b0  a1583da400           mov eax, dword ptr [0xa43d58]
// 008972b5  50                   push eax
// 008972b6  e87717e8ff           call 0x718a32
// 008972bb  83c404               add esp, 4
// 008972be  c7053c3da40030d28a00 mov dword ptr [0xa43d3c], 0x8ad230
// 008972c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008972b0(int);
void func_008972b0()
{
    G4_func_008972b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
