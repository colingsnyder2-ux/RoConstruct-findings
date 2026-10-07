// roc 2010-06 009e7870  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7870
//
// 009e7870  a1540ec200           mov eax, dword ptr [0xc20e54]
// 009e7875  50                   push eax
// 009e7876  e81f01dcff           call 0x7a799a
// 009e787b  83c404               add esp, 4
// 009e787e  c705380ec2001809a000 mov dword ptr [0xc20e38], 0xa00918
// 009e7888  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7870(int);
void func_009e7870()
{
    G4_func_009e7870(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
