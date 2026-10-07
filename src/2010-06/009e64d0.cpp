// roc 2010-06 009e64d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e64d0
//
// 009e64d0  a11cf6c100           mov eax, dword ptr [0xc1f61c]
// 009e64d5  50                   push eax
// 009e64d6  e8bf14dcff           call 0x7a799a
// 009e64db  83c404               add esp, 4
// 009e64de  c70500f6c1001809a000 mov dword ptr [0xc1f600], 0xa00918
// 009e64e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e64d0(int);
void func_009e64d0()
{
    G4_func_009e64d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
