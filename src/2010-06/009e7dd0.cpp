// roc 2010-06 009e7dd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7dd0
//
// 009e7dd0  a15419c200           mov eax, dword ptr [0xc21954]
// 009e7dd5  50                   push eax
// 009e7dd6  e8bffbdbff           call 0x7a799a
// 009e7ddb  83c404               add esp, 4
// 009e7dde  c7053819c2001809a000 mov dword ptr [0xc21938], 0xa00918
// 009e7de8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7dd0(int);
void func_009e7dd0()
{
    G4_func_009e7dd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
