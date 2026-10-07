// roc 2010-06 009e65b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e65b0
//
// 009e65b0  a1bcf5c100           mov eax, dword ptr [0xc1f5bc]
// 009e65b5  50                   push eax
// 009e65b6  e8df13dcff           call 0x7a799a
// 009e65bb  83c404               add esp, 4
// 009e65be  c705a0f5c1001809a000 mov dword ptr [0xc1f5a0], 0xa00918
// 009e65c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e65b0(int);
void func_009e65b0()
{
    G4_func_009e65b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
