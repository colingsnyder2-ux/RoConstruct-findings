// roc 2010-06 009e7830  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7830
//
// 009e7830  a1340ec200           mov eax, dword ptr [0xc20e34]
// 009e7835  50                   push eax
// 009e7836  e85f01dcff           call 0x7a799a
// 009e783b  83c404               add esp, 4
// 009e783e  c705180ec2001809a000 mov dword ptr [0xc20e18], 0xa00918
// 009e7848  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7830(int);
void func_009e7830()
{
    G4_func_009e7830(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
