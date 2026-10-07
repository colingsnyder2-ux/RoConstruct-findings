// roc 2010-06 009e5780  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5780
//
// 009e5780  a134e8c100           mov eax, dword ptr [0xc1e834]
// 009e5785  50                   push eax
// 009e5786  e80f22dcff           call 0x7a799a
// 009e578b  83c404               add esp, 4
// 009e578e  c70518e8c1001809a000 mov dword ptr [0xc1e818], 0xa00918
// 009e5798  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5780(int);
void func_009e5780()
{
    G4_func_009e5780(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
