// roc 2010-06 009e4480  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4480
//
// 009e4480  a164c9c100           mov eax, dword ptr [0xc1c964]
// 009e4485  50                   push eax
// 009e4486  e80f35dcff           call 0x7a799a
// 009e448b  83c404               add esp, 4
// 009e448e  c70548c9c1001809a000 mov dword ptr [0xc1c948], 0xa00918
// 009e4498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4480(int);
void func_009e4480()
{
    G4_func_009e4480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
