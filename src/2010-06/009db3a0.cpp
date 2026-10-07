// roc 2010-06 009db3a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db3a0
//
// 009db3a0  a1080bc000           mov eax, dword ptr [0xc00b08]
// 009db3a5  50                   push eax
// 009db3a6  e8efc5dcff           call 0x7a799a
// 009db3ab  83c404               add esp, 4
// 009db3ae  c705ec0ac0001809a000 mov dword ptr [0xc00aec], 0xa00918
// 009db3b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db3a0(int);
void func_009db3a0()
{
    G4_func_009db3a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
