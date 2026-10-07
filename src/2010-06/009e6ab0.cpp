// roc 2010-06 009e6ab0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6ab0
//
// 009e6ab0  a1d0fbc100           mov eax, dword ptr [0xc1fbd0]
// 009e6ab5  50                   push eax
// 009e6ab6  e8df0edcff           call 0x7a799a
// 009e6abb  83c404               add esp, 4
// 009e6abe  c705b4fbc1001809a000 mov dword ptr [0xc1fbb4], 0xa00918
// 009e6ac8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6ab0(int);
void func_009e6ab0()
{
    G4_func_009e6ab0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
