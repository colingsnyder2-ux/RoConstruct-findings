// roc 2010-06 009e76f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e76f0
//
// 009e76f0  a1dc0cc200           mov eax, dword ptr [0xc20cdc]
// 009e76f5  50                   push eax
// 009e76f6  e89f02dcff           call 0x7a799a
// 009e76fb  83c404               add esp, 4
// 009e76fe  c705c00cc2001809a000 mov dword ptr [0xc20cc0], 0xa00918
// 009e7708  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e76f0(int);
void func_009e76f0()
{
    G4_func_009e76f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
