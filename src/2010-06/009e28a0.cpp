// roc 2010-06 009e28a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e28a0
//
// 009e28a0  a15498c100           mov eax, dword ptr [0xc19854]
// 009e28a5  50                   push eax
// 009e28a6  e8ef50dcff           call 0x7a799a
// 009e28ab  83c404               add esp, 4
// 009e28ae  c7053898c1001809a000 mov dword ptr [0xc19838], 0xa00918
// 009e28b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e28a0(int);
void func_009e28a0()
{
    G4_func_009e28a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
