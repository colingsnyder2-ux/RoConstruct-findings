// roc 2010-06 009e3930  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3930
//
// 009e3930  a17cb4c100           mov eax, dword ptr [0xc1b47c]
// 009e3935  50                   push eax
// 009e3936  e85f40dcff           call 0x7a799a
// 009e393b  83c404               add esp, 4
// 009e393e  c70560b4c1001809a000 mov dword ptr [0xc1b460], 0xa00918
// 009e3948  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3930(int);
void func_009e3930()
{
    G4_func_009e3930(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
