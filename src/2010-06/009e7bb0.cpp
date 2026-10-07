// roc 2010-06 009e7bb0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7bb0
//
// 009e7bb0  a14813c200           mov eax, dword ptr [0xc21348]
// 009e7bb5  50                   push eax
// 009e7bb6  e8dffddbff           call 0x7a799a
// 009e7bbb  83c404               add esp, 4
// 009e7bbe  c7052813c2001809a000 mov dword ptr [0xc21328], 0xa00918
// 009e7bc8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7bb0(int);
void func_009e7bb0()
{
    G4_func_009e7bb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
