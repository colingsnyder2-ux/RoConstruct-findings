// roc 2010-06 009e4c10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4c10
//
// 009e4c10  a1a0d2c100           mov eax, dword ptr [0xc1d2a0]
// 009e4c15  50                   push eax
// 009e4c16  e87f2ddcff           call 0x7a799a
// 009e4c1b  83c404               add esp, 4
// 009e4c1e  c70584d2c1001809a000 mov dword ptr [0xc1d284], 0xa00918
// 009e4c28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4c10(int);
void func_009e4c10()
{
    G4_func_009e4c10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
