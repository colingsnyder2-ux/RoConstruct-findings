// roc 2010-06 009e6090  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6090
//
// 009e6090  a100f4c100           mov eax, dword ptr [0xc1f400]
// 009e6095  50                   push eax
// 009e6096  e8ff18dcff           call 0x7a799a
// 009e609b  83c404               add esp, 4
// 009e609e  c705e4f3c1001809a000 mov dword ptr [0xc1f3e4], 0xa00918
// 009e60a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6090(int);
void func_009e6090()
{
    G4_func_009e6090(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
