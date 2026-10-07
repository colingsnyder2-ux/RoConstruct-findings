// roc 2010-06 009e30a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e30a0
//
// 009e30a0  a114a4c100           mov eax, dword ptr [0xc1a414]
// 009e30a5  50                   push eax
// 009e30a6  e8ef48dcff           call 0x7a799a
// 009e30ab  83c404               add esp, 4
// 009e30ae  c705f8a3c1001809a000 mov dword ptr [0xc1a3f8], 0xa00918
// 009e30b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e30a0(int);
void func_009e30a0()
{
    G4_func_009e30a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
