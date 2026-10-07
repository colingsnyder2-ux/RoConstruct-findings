// roc 2010-06 009e6510  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6510
//
// 009e6510  a11cf7c100           mov eax, dword ptr [0xc1f71c]
// 009e6515  50                   push eax
// 009e6516  e87f14dcff           call 0x7a799a
// 009e651b  83c404               add esp, 4
// 009e651e  c70500f7c1001809a000 mov dword ptr [0xc1f700], 0xa00918
// 009e6528  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6510(int);
void func_009e6510()
{
    G4_func_009e6510(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
