// roc 2010-06 009e6cf0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6cf0
//
// 009e6cf0  a14c02c200           mov eax, dword ptr [0xc2024c]
// 009e6cf5  50                   push eax
// 009e6cf6  e89f0cdcff           call 0x7a799a
// 009e6cfb  83c404               add esp, 4
// 009e6cfe  c7053002c2001809a000 mov dword ptr [0xc20230], 0xa00918
// 009e6d08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6cf0(int);
void func_009e6cf0()
{
    G4_func_009e6cf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
