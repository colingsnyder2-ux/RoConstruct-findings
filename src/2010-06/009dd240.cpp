// roc 2010-06 009dd240  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd240
//
// 009dd240  a18060c000           mov eax, dword ptr [0xc06080]
// 009dd245  50                   push eax
// 009dd246  e84fa7dcff           call 0x7a799a
// 009dd24b  83c404               add esp, 4
// 009dd24e  c7056460c0001809a000 mov dword ptr [0xc06064], 0xa00918
// 009dd258  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd240(int);
void func_009dd240()
{
    G4_func_009dd240(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
