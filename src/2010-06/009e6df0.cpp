// roc 2010-06 009e6df0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6df0
//
// 009e6df0  a11803c200           mov eax, dword ptr [0xc20318]
// 009e6df5  50                   push eax
// 009e6df6  e89f0bdcff           call 0x7a799a
// 009e6dfb  83c404               add esp, 4
// 009e6dfe  c705fc02c2001809a000 mov dword ptr [0xc202fc], 0xa00918
// 009e6e08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6df0(int);
void func_009e6df0()
{
    G4_func_009e6df0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
