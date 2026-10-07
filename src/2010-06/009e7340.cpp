// roc 2010-06 009e7340  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7340
//
// 009e7340  a11c09c200           mov eax, dword ptr [0xc2091c]
// 009e7345  50                   push eax
// 009e7346  e84f06dcff           call 0x7a799a
// 009e734b  83c404               add esp, 4
// 009e734e  c7050009c2001809a000 mov dword ptr [0xc20900], 0xa00918
// 009e7358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7340(int);
void func_009e7340()
{
    G4_func_009e7340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
