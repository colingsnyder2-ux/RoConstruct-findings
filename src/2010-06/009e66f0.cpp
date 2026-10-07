// roc 2010-06 009e66f0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e66f0
//
// 009e66f0  a1e4f8c100           mov eax, dword ptr [0xc1f8e4]
// 009e66f5  50                   push eax
// 009e66f6  e89f12dcff           call 0x7a799a
// 009e66fb  83c404               add esp, 4
// 009e66fe  c705c8f8c1001809a000 mov dword ptr [0xc1f8c8], 0xa00918
// 009e6708  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e66f0(int);
void func_009e66f0()
{
    G4_func_009e66f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
