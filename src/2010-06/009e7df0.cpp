// roc 2010-06 009e7df0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7df0
//
// 009e7df0  a1b01bc200           mov eax, dword ptr [0xc21bb0]
// 009e7df5  50                   push eax
// 009e7df6  e89ffbdbff           call 0x7a799a
// 009e7dfb  83c404               add esp, 4
// 009e7dfe  c705941bc2001809a000 mov dword ptr [0xc21b94], 0xa00918
// 009e7e08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7df0(int);
void func_009e7df0()
{
    G4_func_009e7df0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
