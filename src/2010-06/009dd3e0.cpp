// roc 2010-06 009dd3e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd3e0
//
// 009dd3e0  a14465c000           mov eax, dword ptr [0xc06544]
// 009dd3e5  50                   push eax
// 009dd3e6  e8afa5dcff           call 0x7a799a
// 009dd3eb  83c404               add esp, 4
// 009dd3ee  c7052865c0001809a000 mov dword ptr [0xc06528], 0xa00918
// 009dd3f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd3e0(int);
void func_009dd3e0()
{
    G4_func_009dd3e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
