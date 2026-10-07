// roc 2010-06 009e84c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e84c0
//
// 009e84c0  a1ac1fc200           mov eax, dword ptr [0xc21fac]
// 009e84c5  50                   push eax
// 009e84c6  e8cff4dbff           call 0x7a799a
// 009e84cb  83c404               add esp, 4
// 009e84ce  c705901fc2001809a000 mov dword ptr [0xc21f90], 0xa00918
// 009e84d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e84c0(int);
void func_009e84c0()
{
    G4_func_009e84c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
