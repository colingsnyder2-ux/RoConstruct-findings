// roc 2010-06 009e77b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e77b0
//
// 009e77b0  a19c0ec200           mov eax, dword ptr [0xc20e9c]
// 009e77b5  50                   push eax
// 009e77b6  e8df01dcff           call 0x7a799a
// 009e77bb  83c404               add esp, 4
// 009e77be  c7057c0ec2001809a000 mov dword ptr [0xc20e7c], 0xa00918
// 009e77c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e77b0(int);
void func_009e77b0()
{
    G4_func_009e77b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
