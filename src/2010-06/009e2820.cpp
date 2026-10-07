// roc 2010-06 009e2820  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2820
//
// 009e2820  a11498c100           mov eax, dword ptr [0xc19814]
// 009e2825  50                   push eax
// 009e2826  e86f51dcff           call 0x7a799a
// 009e282b  83c404               add esp, 4
// 009e282e  c705f897c1001809a000 mov dword ptr [0xc197f8], 0xa00918
// 009e2838  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2820(int);
void func_009e2820()
{
    G4_func_009e2820(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
