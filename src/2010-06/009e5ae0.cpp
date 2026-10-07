// roc 2010-06 009e5ae0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5ae0
//
// 009e5ae0  a1c0ecc100           mov eax, dword ptr [0xc1ecc0]
// 009e5ae5  50                   push eax
// 009e5ae6  e8af1edcff           call 0x7a799a
// 009e5aeb  83c404               add esp, 4
// 009e5aee  c705a0ecc1001809a000 mov dword ptr [0xc1eca0], 0xa00918
// 009e5af8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5ae0(int);
void func_009e5ae0()
{
    G4_func_009e5ae0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
