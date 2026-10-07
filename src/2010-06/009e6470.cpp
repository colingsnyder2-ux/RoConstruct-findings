// roc 2010-06 009e6470  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6470
//
// 009e6470  a164f8c100           mov eax, dword ptr [0xc1f864]
// 009e6475  50                   push eax
// 009e6476  e81f15dcff           call 0x7a799a
// 009e647b  83c404               add esp, 4
// 009e647e  c70548f8c1001809a000 mov dword ptr [0xc1f848], 0xa00918
// 009e6488  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6470(int);
void func_009e6470()
{
    G4_func_009e6470(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
