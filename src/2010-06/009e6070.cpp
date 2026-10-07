// roc 2010-06 009e6070  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6070
//
// 009e6070  a124f1c100           mov eax, dword ptr [0xc1f124]
// 009e6075  50                   push eax
// 009e6076  e81f19dcff           call 0x7a799a
// 009e607b  83c404               add esp, 4
// 009e607e  c70508f1c1001809a000 mov dword ptr [0xc1f108], 0xa00918
// 009e6088  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6070(int);
void func_009e6070()
{
    G4_func_009e6070(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
