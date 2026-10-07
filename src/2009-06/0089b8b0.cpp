// roc 2009-06 0089b8b0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b8b0
//
// 0089b8b0  a100dfa400           mov eax, dword ptr [0xa4df00]
// 0089b8b5  50                   push eax
// 0089b8b6  e877d1e7ff           call 0x718a32
// 0089b8bb  83c404               add esp, 4
// 0089b8be  c705e8dea40030d28a00 mov dword ptr [0xa4dee8], 0x8ad230
// 0089b8c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b8b0(int);
void func_0089b8b0()
{
    G4_func_0089b8b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
