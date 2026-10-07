// roc 2010-06 009e3550  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3550
//
// 009e3550  a1e0adc100           mov eax, dword ptr [0xc1ade0]
// 009e3555  50                   push eax
// 009e3556  e83f44dcff           call 0x7a799a
// 009e355b  83c404               add esp, 4
// 009e355e  c705c4adc1001809a000 mov dword ptr [0xc1adc4], 0xa00918
// 009e3568  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3550(int);
void func_009e3550()
{
    G4_func_009e3550(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
