// roc 2010-06 009db300  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db300
//
// 009db300  a1e80ac000           mov eax, dword ptr [0xc00ae8]
// 009db305  50                   push eax
// 009db306  e88fc6dcff           call 0x7a799a
// 009db30b  83c404               add esp, 4
// 009db30e  c705cc0ac0001809a000 mov dword ptr [0xc00acc], 0xa00918
// 009db318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db300(int);
void func_009db300()
{
    G4_func_009db300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
