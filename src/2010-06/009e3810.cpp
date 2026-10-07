// roc 2010-06 009e3810  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3810
//
// 009e3810  a174b1c100           mov eax, dword ptr [0xc1b174]
// 009e3815  50                   push eax
// 009e3816  e87f41dcff           call 0x7a799a
// 009e381b  83c404               add esp, 4
// 009e381e  c70558b1c1001809a000 mov dword ptr [0xc1b158], 0xa00918
// 009e3828  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3810(int);
void func_009e3810()
{
    G4_func_009e3810(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
