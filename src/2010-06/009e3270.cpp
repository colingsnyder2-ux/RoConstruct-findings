// roc 2010-06 009e3270  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3270
//
// 009e3270  a140a9c100           mov eax, dword ptr [0xc1a940]
// 009e3275  50                   push eax
// 009e3276  e81f47dcff           call 0x7a799a
// 009e327b  83c404               add esp, 4
// 009e327e  c70524a9c1001809a000 mov dword ptr [0xc1a924], 0xa00918
// 009e3288  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3270(int);
void func_009e3270()
{
    G4_func_009e3270(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
