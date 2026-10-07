// roc 2010-06 009e5f90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5f90
//
// 009e5f90  a174f2c100           mov eax, dword ptr [0xc1f274]
// 009e5f95  50                   push eax
// 009e5f96  e8ff19dcff           call 0x7a799a
// 009e5f9b  83c404               add esp, 4
// 009e5f9e  c70558f2c1001809a000 mov dword ptr [0xc1f258], 0xa00918
// 009e5fa8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5f90(int);
void func_009e5f90()
{
    G4_func_009e5f90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
