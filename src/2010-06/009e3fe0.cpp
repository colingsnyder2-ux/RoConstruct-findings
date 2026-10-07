// roc 2010-06 009e3fe0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3fe0
//
// 009e3fe0  a110c2c100           mov eax, dword ptr [0xc1c210]
// 009e3fe5  50                   push eax
// 009e3fe6  e8af39dcff           call 0x7a799a
// 009e3feb  83c404               add esp, 4
// 009e3fee  c705f0c1c1001809a000 mov dword ptr [0xc1c1f0], 0xa00918
// 009e3ff8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3fe0(int);
void func_009e3fe0()
{
    G4_func_009e3fe0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
