// roc 2010-06 009e5940  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5940
//
// 009e5940  a1d0e9c100           mov eax, dword ptr [0xc1e9d0]
// 009e5945  50                   push eax
// 009e5946  e84f20dcff           call 0x7a799a
// 009e594b  83c404               add esp, 4
// 009e594e  c705b4e9c1001809a000 mov dword ptr [0xc1e9b4], 0xa00918
// 009e5958  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5940(int);
void func_009e5940()
{
    G4_func_009e5940(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
