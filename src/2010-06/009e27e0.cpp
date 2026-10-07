// roc 2010-06 009e27e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e27e0
//
// 009e27e0  a17c98c100           mov eax, dword ptr [0xc1987c]
// 009e27e5  50                   push eax
// 009e27e6  e8af51dcff           call 0x7a799a
// 009e27eb  83c404               add esp, 4
// 009e27ee  c7055c98c1001809a000 mov dword ptr [0xc1985c], 0xa00918
// 009e27f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e27e0(int);
void func_009e27e0()
{
    G4_func_009e27e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
