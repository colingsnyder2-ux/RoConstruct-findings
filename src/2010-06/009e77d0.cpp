// roc 2010-06 009e77d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e77d0
//
// 009e77d0  a1c40ec200           mov eax, dword ptr [0xc20ec4]
// 009e77d5  50                   push eax
// 009e77d6  e8bf01dcff           call 0x7a799a
// 009e77db  83c404               add esp, 4
// 009e77de  c705a40ec2001809a000 mov dword ptr [0xc20ea4], 0xa00918
// 009e77e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e77d0(int);
void func_009e77d0()
{
    G4_func_009e77d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
