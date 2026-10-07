// roc 2010-06 009dc1e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc1e0
//
// 009dc1e0  a14c47c000           mov eax, dword ptr [0xc0474c]
// 009dc1e5  50                   push eax
// 009dc1e6  e8afb7dcff           call 0x7a799a
// 009dc1eb  83c404               add esp, 4
// 009dc1ee  c7052c47c0001809a000 mov dword ptr [0xc0472c], 0xa00918
// 009dc1f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc1e0(int);
void func_009dc1e0()
{
    G4_func_009dc1e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
