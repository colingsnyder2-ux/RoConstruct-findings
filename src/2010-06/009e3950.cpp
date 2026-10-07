// roc 2010-06 009e3950  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3950
//
// 009e3950  a154b1c100           mov eax, dword ptr [0xc1b154]
// 009e3955  50                   push eax
// 009e3956  e83f40dcff           call 0x7a799a
// 009e395b  83c404               add esp, 4
// 009e395e  c70538b1c1001809a000 mov dword ptr [0xc1b138], 0xa00918
// 009e3968  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3950(int);
void func_009e3950()
{
    G4_func_009e3950(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
