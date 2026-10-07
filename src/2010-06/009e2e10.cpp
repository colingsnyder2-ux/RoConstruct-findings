// roc 2010-06 009e2e10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2e10
//
// 009e2e10  a154a0c100           mov eax, dword ptr [0xc1a054]
// 009e2e15  50                   push eax
// 009e2e16  e87f4bdcff           call 0x7a799a
// 009e2e1b  83c404               add esp, 4
// 009e2e1e  c70538a0c1001809a000 mov dword ptr [0xc1a038], 0xa00918
// 009e2e28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2e10(int);
void func_009e2e10()
{
    G4_func_009e2e10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
