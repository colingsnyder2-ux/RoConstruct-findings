// roc 2010-06 009db320  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db320
//
// 009db320  a1c80ac000           mov eax, dword ptr [0xc00ac8]
// 009db325  50                   push eax
// 009db326  e86fc6dcff           call 0x7a799a
// 009db32b  83c404               add esp, 4
// 009db32e  c705ac0ac0001809a000 mov dword ptr [0xc00aac], 0xa00918
// 009db338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db320(int);
void func_009db320()
{
    G4_func_009db320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
