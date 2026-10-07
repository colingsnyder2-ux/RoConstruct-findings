// roc 2010-06 009e5960  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5960
//
// 009e5960  a150e9c100           mov eax, dword ptr [0xc1e950]
// 009e5965  50                   push eax
// 009e5966  e82f20dcff           call 0x7a799a
// 009e596b  83c404               add esp, 4
// 009e596e  c70534e9c1001809a000 mov dword ptr [0xc1e934], 0xa00918
// 009e5978  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5960(int);
void func_009e5960()
{
    G4_func_009e5960(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
