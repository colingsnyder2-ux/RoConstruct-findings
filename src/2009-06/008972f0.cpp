// roc 2009-06 008972f0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008972f0
//
// 008972f0  a1743da400           mov eax, dword ptr [0xa43d74]
// 008972f5  50                   push eax
// 008972f6  e83717e8ff           call 0x718a32
// 008972fb  83c404               add esp, 4
// 008972fe  c7055c3da40030d28a00 mov dword ptr [0xa43d5c], 0x8ad230
// 00897308  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008972f0(int);
void func_008972f0()
{
    G4_func_008972f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
