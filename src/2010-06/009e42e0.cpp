// roc 2010-06 009e42e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e42e0
//
// 009e42e0  a11cc8c100           mov eax, dword ptr [0xc1c81c]
// 009e42e5  50                   push eax
// 009e42e6  e8af36dcff           call 0x7a799a
// 009e42eb  83c404               add esp, 4
// 009e42ee  c70500c8c1001809a000 mov dword ptr [0xc1c800], 0xa00918
// 009e42f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e42e0(int);
void func_009e42e0()
{
    G4_func_009e42e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
