// roc 2010-06 009e7810  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7810
//
// 009e7810  a1140ec200           mov eax, dword ptr [0xc20e14]
// 009e7815  50                   push eax
// 009e7816  e87f01dcff           call 0x7a799a
// 009e781b  83c404               add esp, 4
// 009e781e  c705f80dc2001809a000 mov dword ptr [0xc20df8], 0xa00918
// 009e7828  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7810(int);
void func_009e7810()
{
    G4_func_009e7810(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
