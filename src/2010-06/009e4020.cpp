// roc 2010-06 009e4020  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4020
//
// 009e4020  a160c3c100           mov eax, dword ptr [0xc1c360]
// 009e4025  50                   push eax
// 009e4026  e86f39dcff           call 0x7a799a
// 009e402b  83c404               add esp, 4
// 009e402e  c70544c3c1001809a000 mov dword ptr [0xc1c344], 0xa00918
// 009e4038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4020(int);
void func_009e4020()
{
    G4_func_009e4020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
