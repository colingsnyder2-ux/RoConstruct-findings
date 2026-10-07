// roc 2010-06 009e6cd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6cd0
//
// 009e6cd0  a1b801c200           mov eax, dword ptr [0xc201b8]
// 009e6cd5  50                   push eax
// 009e6cd6  e8bf0cdcff           call 0x7a799a
// 009e6cdb  83c404               add esp, 4
// 009e6cde  c7059801c2001809a000 mov dword ptr [0xc20198], 0xa00918
// 009e6ce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6cd0(int);
void func_009e6cd0()
{
    G4_func_009e6cd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
