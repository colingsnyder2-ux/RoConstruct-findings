// roc 2010-06 009e6570  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6570
//
// 009e6570  a19cf6c100           mov eax, dword ptr [0xc1f69c]
// 009e6575  50                   push eax
// 009e6576  e81f14dcff           call 0x7a799a
// 009e657b  83c404               add esp, 4
// 009e657e  c70580f6c1001809a000 mov dword ptr [0xc1f680], 0xa00918
// 009e6588  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6570(int);
void func_009e6570()
{
    G4_func_009e6570(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
