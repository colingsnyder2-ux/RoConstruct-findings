// roc 2010-06 009db590  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db590
//
// 009db590  a17815c000           mov eax, dword ptr [0xc01578]
// 009db595  50                   push eax
// 009db596  e8ffc3dcff           call 0x7a799a
// 009db59b  83c404               add esp, 4
// 009db59e  c7055815c0001809a000 mov dword ptr [0xc01558], 0xa00918
// 009db5a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db590(int);
void func_009db590()
{
    G4_func_009db590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
