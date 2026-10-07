// roc 2010-06 009e84a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e84a0
//
// 009e84a0  a16423c200           mov eax, dword ptr [0xc22364]
// 009e84a5  50                   push eax
// 009e84a6  e8eff4dbff           call 0x7a799a
// 009e84ab  83c404               add esp, 4
// 009e84ae  c7054823c2001809a000 mov dword ptr [0xc22348], 0xa00918
// 009e84b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e84a0(int);
void func_009e84a0()
{
    G4_func_009e84a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
