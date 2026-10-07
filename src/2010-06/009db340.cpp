// roc 2010-06 009db340  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db340
//
// 009db340  a1a80ac000           mov eax, dword ptr [0xc00aa8]
// 009db345  50                   push eax
// 009db346  e84fc6dcff           call 0x7a799a
// 009db34b  83c404               add esp, 4
// 009db34e  c7058c0ac0001809a000 mov dword ptr [0xc00a8c], 0xa00918
// 009db358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db340(int);
void func_009db340()
{
    G4_func_009db340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
