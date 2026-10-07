// roc 2010-06 009e5c80  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5c80
//
// 009e5c80  a158ecc100           mov eax, dword ptr [0xc1ec58]
// 009e5c85  50                   push eax
// 009e5c86  e80f1ddcff           call 0x7a799a
// 009e5c8b  83c404               add esp, 4
// 009e5c8e  c7053cecc1001809a000 mov dword ptr [0xc1ec3c], 0xa00918
// 009e5c98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5c80(int);
void func_009e5c80()
{
    G4_func_009e5c80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
