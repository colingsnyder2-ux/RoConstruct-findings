// roc 2010-06 009db510  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db510
//
// 009db510  a11816c000           mov eax, dword ptr [0xc01618]
// 009db515  50                   push eax
// 009db516  e87fc4dcff           call 0x7a799a
// 009db51b  83c404               add esp, 4
// 009db51e  c705f815c0001809a000 mov dword ptr [0xc015f8], 0xa00918
// 009db528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db510(int);
void func_009db510()
{
    G4_func_009db510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
