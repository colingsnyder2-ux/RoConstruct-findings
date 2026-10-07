// roc 2010-06 009dc240  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc240
//
// 009dc240  a13448c000           mov eax, dword ptr [0xc04834]
// 009dc245  50                   push eax
// 009dc246  e84fb7dcff           call 0x7a799a
// 009dc24b  83c404               add esp, 4
// 009dc24e  c7051848c0001809a000 mov dword ptr [0xc04818], 0xa00918
// 009dc258  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc240(int);
void func_009dc240()
{
    G4_func_009dc240(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
