// roc 2010-06 009e77f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e77f0
//
// 009e77f0  a1780ec200           mov eax, dword ptr [0xc20e78]
// 009e77f5  50                   push eax
// 009e77f6  e89f01dcff           call 0x7a799a
// 009e77fb  83c404               add esp, 4
// 009e77fe  c7055c0ec2001809a000 mov dword ptr [0xc20e5c], 0xa00918
// 009e7808  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e77f0(int);
void func_009e77f0()
{
    G4_func_009e77f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
