// roc 2007-08 007788b0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007788b0
//
// 007788b0  a120e88b00           mov eax, dword ptr [0x8be820]
// 007788b5  50                   push eax
// 007788b6  e8a773ebff           call 0x62fc62
// 007788bb  83c404               add esp, 4
// 007788be  c70508e88b00b4707800 mov dword ptr [0x8be808], 0x7870b4
// 007788c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007788b0(int);
void func_007788b0()
{
    G4_func_007788b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
