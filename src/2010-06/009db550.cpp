// roc 2010-06 009db550  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db550
//
// 009db550  a1c815c000           mov eax, dword ptr [0xc015c8]
// 009db555  50                   push eax
// 009db556  e83fc4dcff           call 0x7a799a
// 009db55b  83c404               add esp, 4
// 009db55e  c705a815c0001809a000 mov dword ptr [0xc015a8], 0xa00918
// 009db568  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db550(int);
void func_009db550()
{
    G4_func_009db550(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
