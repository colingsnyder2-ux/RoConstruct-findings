// roc 2010-06 009de5e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de5e0
//
// 009de5e0  a198acc000           mov eax, dword ptr [0xc0ac98]
// 009de5e5  50                   push eax
// 009de5e6  e8af93dcff           call 0x7a799a
// 009de5eb  83c404               add esp, 4
// 009de5ee  c7057cacc0001809a000 mov dword ptr [0xc0ac7c], 0xa00918
// 009de5f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de5e0(int);
void func_009de5e0()
{
    G4_func_009de5e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
