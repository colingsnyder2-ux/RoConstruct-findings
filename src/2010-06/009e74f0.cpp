// roc 2010-06 009e74f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e74f0
//
// 009e74f0  a1b00ac200           mov eax, dword ptr [0xc20ab0]
// 009e74f5  50                   push eax
// 009e74f6  e89f04dcff           call 0x7a799a
// 009e74fb  83c404               add esp, 4
// 009e74fe  c705940ac2001809a000 mov dword ptr [0xc20a94], 0xa00918
// 009e7508  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e74f0(int);
void func_009e74f0()
{
    G4_func_009e74f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
