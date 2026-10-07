// roc 2010-06 009e57c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e57c0
//
// 009e57c0  a114e8c100           mov eax, dword ptr [0xc1e814]
// 009e57c5  50                   push eax
// 009e57c6  e8cf21dcff           call 0x7a799a
// 009e57cb  83c404               add esp, 4
// 009e57ce  c705f8e7c1001809a000 mov dword ptr [0xc1e7f8], 0xa00918
// 009e57d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e57c0(int);
void func_009e57c0()
{
    G4_func_009e57c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
