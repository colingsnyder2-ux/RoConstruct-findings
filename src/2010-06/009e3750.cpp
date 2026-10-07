// roc 2010-06 009e3750  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3750
//
// 009e3750  a19cb4c100           mov eax, dword ptr [0xc1b49c]
// 009e3755  50                   push eax
// 009e3756  e83f42dcff           call 0x7a799a
// 009e375b  83c404               add esp, 4
// 009e375e  c70580b4c1001809a000 mov dword ptr [0xc1b480], 0xa00918
// 009e3768  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3750(int);
void func_009e3750()
{
    G4_func_009e3750(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
