// roc 2010-06 009e54d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e54d0
//
// 009e54d0  a104e4c100           mov eax, dword ptr [0xc1e404]
// 009e54d5  50                   push eax
// 009e54d6  e8bf24dcff           call 0x7a799a
// 009e54db  83c404               add esp, 4
// 009e54de  c705e8e3c1001809a000 mov dword ptr [0xc1e3e8], 0xa00918
// 009e54e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e54d0(int);
void func_009e54d0()
{
    G4_func_009e54d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
