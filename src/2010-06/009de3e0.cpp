// roc 2010-06 009de3e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de3e0
//
// 009de3e0  a138acc000           mov eax, dword ptr [0xc0ac38]
// 009de3e5  50                   push eax
// 009de3e6  e8af95dcff           call 0x7a799a
// 009de3eb  83c404               add esp, 4
// 009de3ee  c7051cacc0001809a000 mov dword ptr [0xc0ac1c], 0xa00918
// 009de3f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de3e0(int);
void func_009de3e0()
{
    G4_func_009de3e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
