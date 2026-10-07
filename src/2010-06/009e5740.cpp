// roc 2010-06 009e5740  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5740
//
// 009e5740  a128e7c100           mov eax, dword ptr [0xc1e728]
// 009e5745  50                   push eax
// 009e5746  e84f22dcff           call 0x7a799a
// 009e574b  83c404               add esp, 4
// 009e574e  c70508e7c1001809a000 mov dword ptr [0xc1e708], 0xa00918
// 009e5758  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5740(int);
void func_009e5740()
{
    G4_func_009e5740(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
