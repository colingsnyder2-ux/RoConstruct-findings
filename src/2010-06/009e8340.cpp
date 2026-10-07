// roc 2010-06 009e8340  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8340
//
// 009e8340  a1cc21c200           mov eax, dword ptr [0xc221cc]
// 009e8345  50                   push eax
// 009e8346  e84ff6dbff           call 0x7a799a
// 009e834b  83c404               add esp, 4
// 009e834e  c705b021c2001809a000 mov dword ptr [0xc221b0], 0xa00918
// 009e8358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8340(int);
void func_009e8340()
{
    G4_func_009e8340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
