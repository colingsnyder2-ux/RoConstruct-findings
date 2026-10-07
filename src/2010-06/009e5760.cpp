// roc 2010-06 009e5760  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5760
//
// 009e5760  a194e7c100           mov eax, dword ptr [0xc1e794]
// 009e5765  50                   push eax
// 009e5766  e82f22dcff           call 0x7a799a
// 009e576b  83c404               add esp, 4
// 009e576e  c70578e7c1001809a000 mov dword ptr [0xc1e778], 0xa00918
// 009e5778  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5760(int);
void func_009e5760()
{
    G4_func_009e5760(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
