// roc 2010-06 009e8520  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8520
//
// 009e8520  a1a423c200           mov eax, dword ptr [0xc223a4]
// 009e8525  50                   push eax
// 009e8526  e86ff4dbff           call 0x7a799a
// 009e852b  83c404               add esp, 4
// 009e852e  c7058823c2001809a000 mov dword ptr [0xc22388], 0xa00918
// 009e8538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8520(int);
void func_009e8520()
{
    G4_func_009e8520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
