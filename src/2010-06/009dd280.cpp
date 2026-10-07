// roc 2010-06 009dd280  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd280
//
// 009dd280  a1a060c000           mov eax, dword ptr [0xc060a0]
// 009dd285  50                   push eax
// 009dd286  e80fa7dcff           call 0x7a799a
// 009dd28b  83c404               add esp, 4
// 009dd28e  c7058460c0001809a000 mov dword ptr [0xc06084], 0xa00918
// 009dd298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd280(int);
void func_009dd280()
{
    G4_func_009dd280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
