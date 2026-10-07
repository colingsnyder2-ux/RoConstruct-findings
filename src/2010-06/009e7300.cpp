// roc 2010-06 009e7300  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7300
//
// 009e7300  a1c409c200           mov eax, dword ptr [0xc209c4]
// 009e7305  50                   push eax
// 009e7306  e88f06dcff           call 0x7a799a
// 009e730b  83c404               add esp, 4
// 009e730e  c705a809c2001809a000 mov dword ptr [0xc209a8], 0xa00918
// 009e7318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7300(int);
void func_009e7300()
{
    G4_func_009e7300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
