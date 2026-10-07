// roc 2010-06 009e74b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e74b0
//
// 009e74b0  a1180bc200           mov eax, dword ptr [0xc20b18]
// 009e74b5  50                   push eax
// 009e74b6  e8df04dcff           call 0x7a799a
// 009e74bb  83c404               add esp, 4
// 009e74be  c705fc0ac2001809a000 mov dword ptr [0xc20afc], 0xa00918
// 009e74c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e74b0(int);
void func_009e74b0()
{
    G4_func_009e74b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
