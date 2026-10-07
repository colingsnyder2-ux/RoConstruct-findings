// roc 2010-06 009db470  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db470
//
// 009db470  a13017c000           mov eax, dword ptr [0xc01730]
// 009db475  50                   push eax
// 009db476  e81fc5dcff           call 0x7a799a
// 009db47b  83c404               add esp, 4
// 009db47e  c7051017c0001809a000 mov dword ptr [0xc01710], 0xa00918
// 009db488  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db470(int);
void func_009db470()
{
    G4_func_009db470(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
