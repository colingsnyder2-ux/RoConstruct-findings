// roc 2010-06 009e43a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e43a0
//
// 009e43a0  a1a0c8c100           mov eax, dword ptr [0xc1c8a0]
// 009e43a5  50                   push eax
// 009e43a6  e8ef35dcff           call 0x7a799a
// 009e43ab  83c404               add esp, 4
// 009e43ae  c70580c8c1001809a000 mov dword ptr [0xc1c880], 0xa00918
// 009e43b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e43a0(int);
void func_009e43a0()
{
    G4_func_009e43a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
