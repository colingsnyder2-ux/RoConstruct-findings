// roc 2010-06 009e6430  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6430
//
// 009e6430  a1dcf5c100           mov eax, dword ptr [0xc1f5dc]
// 009e6435  50                   push eax
// 009e6436  e85f15dcff           call 0x7a799a
// 009e643b  83c404               add esp, 4
// 009e643e  c705c0f5c1001809a000 mov dword ptr [0xc1f5c0], 0xa00918
// 009e6448  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6430(int);
void func_009e6430()
{
    G4_func_009e6430(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
