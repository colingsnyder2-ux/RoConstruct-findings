// roc 2010-06 009e5e80  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5e80
//
// 009e5e80  a114efc100           mov eax, dword ptr [0xc1ef14]
// 009e5e85  50                   push eax
// 009e5e86  e80f1bdcff           call 0x7a799a
// 009e5e8b  83c404               add esp, 4
// 009e5e8e  c705f8eec1001809a000 mov dword ptr [0xc1eef8], 0xa00918
// 009e5e98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5e80(int);
void func_009e5e80()
{
    G4_func_009e5e80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
