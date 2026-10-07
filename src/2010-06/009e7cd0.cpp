// roc 2010-06 009e7cd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7cd0
//
// 009e7cd0  a11017c200           mov eax, dword ptr [0xc21710]
// 009e7cd5  50                   push eax
// 009e7cd6  e8bffcdbff           call 0x7a799a
// 009e7cdb  83c404               add esp, 4
// 009e7cde  c705f016c2001809a000 mov dword ptr [0xc216f0], 0xa00918
// 009e7ce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7cd0(int);
void func_009e7cd0()
{
    G4_func_009e7cd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
