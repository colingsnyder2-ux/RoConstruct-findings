// roc 2010-06 009e83e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e83e0
//
// 009e83e0  a1dc22c200           mov eax, dword ptr [0xc222dc]
// 009e83e5  50                   push eax
// 009e83e6  e8aff5dbff           call 0x7a799a
// 009e83eb  83c404               add esp, 4
// 009e83ee  c705bc22c2001809a000 mov dword ptr [0xc222bc], 0xa00918
// 009e83f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e83e0(int);
void func_009e83e0()
{
    G4_func_009e83e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
