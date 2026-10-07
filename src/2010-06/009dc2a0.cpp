// roc 2010-06 009dc2a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc2a0
//
// 009dc2a0  a17448c000           mov eax, dword ptr [0xc04874]
// 009dc2a5  50                   push eax
// 009dc2a6  e8efb6dcff           call 0x7a799a
// 009dc2ab  83c404               add esp, 4
// 009dc2ae  c7055848c0001809a000 mov dword ptr [0xc04858], 0xa00918
// 009dc2b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc2a0(int);
void func_009dc2a0()
{
    G4_func_009dc2a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
