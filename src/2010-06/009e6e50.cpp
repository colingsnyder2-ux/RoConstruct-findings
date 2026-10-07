// roc 2010-06 009e6e50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6e50
//
// 009e6e50  a1c003c200           mov eax, dword ptr [0xc203c0]
// 009e6e55  50                   push eax
// 009e6e56  e83f0bdcff           call 0x7a799a
// 009e6e5b  83c404               add esp, 4
// 009e6e5e  c705a003c2001809a000 mov dword ptr [0xc203a0], 0xa00918
// 009e6e68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6e50(int);
void func_009e6e50()
{
    G4_func_009e6e50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
