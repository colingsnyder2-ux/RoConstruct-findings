// roc 2010-06 009e8540  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8540
//
// 009e8540  a18423c200           mov eax, dword ptr [0xc22384]
// 009e8545  50                   push eax
// 009e8546  e84ff4dbff           call 0x7a799a
// 009e854b  83c404               add esp, 4
// 009e854e  c7056823c2001809a000 mov dword ptr [0xc22368], 0xa00918
// 009e8558  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8540(int);
void func_009e8540()
{
    G4_func_009e8540(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
