// roc 2010-06 009e7690  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7690
//
// 009e7690  a1fc0cc200           mov eax, dword ptr [0xc20cfc]
// 009e7695  50                   push eax
// 009e7696  e8ff02dcff           call 0x7a799a
// 009e769b  83c404               add esp, 4
// 009e769e  c705e00cc2001809a000 mov dword ptr [0xc20ce0], 0xa00918
// 009e76a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7690(int);
void func_009e7690()
{
    G4_func_009e7690(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
