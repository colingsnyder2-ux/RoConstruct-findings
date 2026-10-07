// roc 2010-06 009e3870  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3870
//
// 009e3870  a170b0c100           mov eax, dword ptr [0xc1b070]
// 009e3875  50                   push eax
// 009e3876  e81f41dcff           call 0x7a799a
// 009e387b  83c404               add esp, 4
// 009e387e  c70554b0c1001809a000 mov dword ptr [0xc1b054], 0xa00918
// 009e3888  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3870(int);
void func_009e3870()
{
    G4_func_009e3870(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
