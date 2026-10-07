// roc 2010-06 009e7510  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7510
//
// 009e7510  a1d00ac200           mov eax, dword ptr [0xc20ad0]
// 009e7515  50                   push eax
// 009e7516  e87f04dcff           call 0x7a799a
// 009e751b  83c404               add esp, 4
// 009e751e  c705b40ac2001809a000 mov dword ptr [0xc20ab4], 0xa00918
// 009e7528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7510(int);
void func_009e7510()
{
    G4_func_009e7510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
