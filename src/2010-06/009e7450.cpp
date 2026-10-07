// roc 2010-06 009e7450  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7450
//
// 009e7450  a1e809c200           mov eax, dword ptr [0xc209e8]
// 009e7455  50                   push eax
// 009e7456  e83f05dcff           call 0x7a799a
// 009e745b  83c404               add esp, 4
// 009e745e  c705cc09c2001809a000 mov dword ptr [0xc209cc], 0xa00918
// 009e7468  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7450(int);
void func_009e7450()
{
    G4_func_009e7450(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
