// roc 2010-06 009db610  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db610
//
// 009db610  a1bc17c000           mov eax, dword ptr [0xc017bc]
// 009db615  50                   push eax
// 009db616  e87fc3dcff           call 0x7a799a
// 009db61b  83c404               add esp, 4
// 009db61e  c705a017c0001809a000 mov dword ptr [0xc017a0], 0xa00918
// 009db628  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db610(int);
void func_009db610()
{
    G4_func_009db610(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
