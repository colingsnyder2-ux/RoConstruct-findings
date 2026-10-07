// roc 2010-06 009e57e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e57e0
//
// 009e57e0  a154e7c100           mov eax, dword ptr [0xc1e754]
// 009e57e5  50                   push eax
// 009e57e6  e8af21dcff           call 0x7a799a
// 009e57eb  83c404               add esp, 4
// 009e57ee  c70538e7c1001809a000 mov dword ptr [0xc1e738], 0xa00918
// 009e57f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e57e0(int);
void func_009e57e0()
{
    G4_func_009e57e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
