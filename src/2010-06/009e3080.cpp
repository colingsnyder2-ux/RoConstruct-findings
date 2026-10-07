// roc 2010-06 009e3080  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3080
//
// 009e3080  a14ca3c100           mov eax, dword ptr [0xc1a34c]
// 009e3085  50                   push eax
// 009e3086  e80f49dcff           call 0x7a799a
// 009e308b  83c404               add esp, 4
// 009e308e  c70530a3c1001809a000 mov dword ptr [0xc1a330], 0xa00918
// 009e3098  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3080(int);
void func_009e3080()
{
    G4_func_009e3080(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
