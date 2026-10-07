// roc 2010-06 009e70b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e70b0
//
// 009e70b0  a15c06c200           mov eax, dword ptr [0xc2065c]
// 009e70b5  50                   push eax
// 009e70b6  e8df08dcff           call 0x7a799a
// 009e70bb  83c404               add esp, 4
// 009e70be  c7054006c2001809a000 mov dword ptr [0xc20640], 0xa00918
// 009e70c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e70b0(int);
void func_009e70b0()
{
    G4_func_009e70b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
