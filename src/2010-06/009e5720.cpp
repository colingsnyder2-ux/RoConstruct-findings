// roc 2010-06 009e5720  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5720
//
// 009e5720  a104e7c100           mov eax, dword ptr [0xc1e704]
// 009e5725  50                   push eax
// 009e5726  e86f22dcff           call 0x7a799a
// 009e572b  83c404               add esp, 4
// 009e572e  c705e4e6c1001809a000 mov dword ptr [0xc1e6e4], 0xa00918
// 009e5738  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5720(int);
void func_009e5720()
{
    G4_func_009e5720(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
