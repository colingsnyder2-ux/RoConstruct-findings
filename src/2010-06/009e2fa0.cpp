// roc 2010-06 009e2fa0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2fa0
//
// 009e2fa0  a16ca3c100           mov eax, dword ptr [0xc1a36c]
// 009e2fa5  50                   push eax
// 009e2fa6  e8ef49dcff           call 0x7a799a
// 009e2fab  83c404               add esp, 4
// 009e2fae  c70550a3c1001809a000 mov dword ptr [0xc1a350], 0xa00918
// 009e2fb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2fa0(int);
void func_009e2fa0()
{
    G4_func_009e2fa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
