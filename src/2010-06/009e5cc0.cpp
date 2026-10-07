// roc 2010-06 009e5cc0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5cc0
//
// 009e5cc0  a1e8edc100           mov eax, dword ptr [0xc1ede8]
// 009e5cc5  50                   push eax
// 009e5cc6  e8cf1cdcff           call 0x7a799a
// 009e5ccb  83c404               add esp, 4
// 009e5cce  c705c8edc1001809a000 mov dword ptr [0xc1edc8], 0xa00918
// 009e5cd8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5cc0(int);
void func_009e5cc0()
{
    G4_func_009e5cc0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
