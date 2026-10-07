// roc 2010-06 009e7730  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7730
//
// 009e7730  a1600dc200           mov eax, dword ptr [0xc20d60]
// 009e7735  50                   push eax
// 009e7736  e85f02dcff           call 0x7a799a
// 009e773b  83c404               add esp, 4
// 009e773e  c705440dc2001809a000 mov dword ptr [0xc20d44], 0xa00918
// 009e7748  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7730(int);
void func_009e7730()
{
    G4_func_009e7730(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
