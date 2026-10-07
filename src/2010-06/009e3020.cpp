// roc 2010-06 009e3020  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3020
//
// 009e3020  a174a4c100           mov eax, dword ptr [0xc1a474]
// 009e3025  50                   push eax
// 009e3026  e86f49dcff           call 0x7a799a
// 009e302b  83c404               add esp, 4
// 009e302e  c70558a4c1001809a000 mov dword ptr [0xc1a458], 0xa00918
// 009e3038  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3020(int);
void func_009e3020()
{
    G4_func_009e3020(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
