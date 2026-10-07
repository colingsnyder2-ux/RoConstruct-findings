// roc 2010-06 009e7650  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7650
//
// 009e7650  a11c0dc200           mov eax, dword ptr [0xc20d1c]
// 009e7655  50                   push eax
// 009e7656  e83f03dcff           call 0x7a799a
// 009e765b  83c404               add esp, 4
// 009e765e  c705000dc2001809a000 mov dword ptr [0xc20d00], 0xa00918
// 009e7668  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7650(int);
void func_009e7650()
{
    G4_func_009e7650(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
