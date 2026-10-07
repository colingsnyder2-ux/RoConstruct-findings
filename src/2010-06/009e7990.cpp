// roc 2010-06 009e7990  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7990
//
// 009e7990  a1bc10c200           mov eax, dword ptr [0xc210bc]
// 009e7995  50                   push eax
// 009e7996  e8ffffdbff           call 0x7a799a
// 009e799b  83c404               add esp, 4
// 009e799e  c7059c10c2001809a000 mov dword ptr [0xc2109c], 0xa00918
// 009e79a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7990(int);
void func_009e7990()
{
    G4_func_009e7990(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
