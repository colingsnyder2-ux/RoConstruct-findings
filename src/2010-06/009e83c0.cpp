// roc 2010-06 009e83c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e83c0
//
// 009e83c0  a1ac1ec200           mov eax, dword ptr [0xc21eac]
// 009e83c5  50                   push eax
// 009e83c6  e8cff5dbff           call 0x7a799a
// 009e83cb  83c404               add esp, 4
// 009e83ce  c705901ec2001809a000 mov dword ptr [0xc21e90], 0xa00918
// 009e83d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e83c0(int);
void func_009e83c0()
{
    G4_func_009e83c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
