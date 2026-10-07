// roc 2010-06 009e2bd0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2bd0
//
// 009e2bd0  a17c9bc100           mov eax, dword ptr [0xc19b7c]
// 009e2bd5  50                   push eax
// 009e2bd6  e8bf4ddcff           call 0x7a799a
// 009e2bdb  83c404               add esp, 4
// 009e2bde  c705609bc1001809a000 mov dword ptr [0xc19b60], 0xa00918
// 009e2be8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2bd0(int);
void func_009e2bd0()
{
    G4_func_009e2bd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
