// roc 2010-06 009e7bf0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7bf0
//
// 009e7bf0  a1a813c200           mov eax, dword ptr [0xc213a8]
// 009e7bf5  50                   push eax
// 009e7bf6  e89ffddbff           call 0x7a799a
// 009e7bfb  83c404               add esp, 4
// 009e7bfe  c7058c13c2001809a000 mov dword ptr [0xc2138c], 0xa00918
// 009e7c08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7bf0(int);
void func_009e7bf0()
{
    G4_func_009e7bf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
