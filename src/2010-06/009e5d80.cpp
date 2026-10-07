// roc 2010-06 009e5d80  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5d80
//
// 009e5d80  a138ecc100           mov eax, dword ptr [0xc1ec38]
// 009e5d85  50                   push eax
// 009e5d86  e80f1cdcff           call 0x7a799a
// 009e5d8b  83c404               add esp, 4
// 009e5d8e  c7051cecc1001809a000 mov dword ptr [0xc1ec1c], 0xa00918
// 009e5d98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5d80(int);
void func_009e5d80()
{
    G4_func_009e5d80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
