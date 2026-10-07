// roc 2010-06 009e25e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e25e0
//
// 009e25e0  a10094c100           mov eax, dword ptr [0xc19400]
// 009e25e5  50                   push eax
// 009e25e6  e8af53dcff           call 0x7a799a
// 009e25eb  83c404               add esp, 4
// 009e25ee  c705e093c1001809a000 mov dword ptr [0xc193e0], 0xa00918
// 009e25f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e25e0(int);
void func_009e25e0()
{
    G4_func_009e25e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
