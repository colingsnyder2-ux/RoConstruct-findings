// roc 2010-06 009e5c40  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5c40
//
// 009e5c40  a104edc100           mov eax, dword ptr [0xc1ed04]
// 009e5c45  50                   push eax
// 009e5c46  e84f1ddcff           call 0x7a799a
// 009e5c4b  83c404               add esp, 4
// 009e5c4e  c705e4ecc1001809a000 mov dword ptr [0xc1ece4], 0xa00918
// 009e5c58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5c40(int);
void func_009e5c40()
{
    G4_func_009e5c40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
