// roc 2010-06 009e76d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e76d0
//
// 009e76d0  a1540cc200           mov eax, dword ptr [0xc20c54]
// 009e76d5  50                   push eax
// 009e76d6  e8bf02dcff           call 0x7a799a
// 009e76db  83c404               add esp, 4
// 009e76de  c705380cc2001809a000 mov dword ptr [0xc20c38], 0xa00918
// 009e76e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e76d0(int);
void func_009e76d0()
{
    G4_func_009e76d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
