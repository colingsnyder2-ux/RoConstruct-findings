// roc 2010-06 009e7550  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7550
//
// 009e7550  a1f80ac200           mov eax, dword ptr [0xc20af8]
// 009e7555  50                   push eax
// 009e7556  e83f04dcff           call 0x7a799a
// 009e755b  83c404               add esp, 4
// 009e755e  c705dc0ac2001809a000 mov dword ptr [0xc20adc], 0xa00918
// 009e7568  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7550(int);
void func_009e7550()
{
    G4_func_009e7550(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
