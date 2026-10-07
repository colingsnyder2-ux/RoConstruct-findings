// roc 2010-06 009e3470  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3470
//
// 009e3470  a1c0adc100           mov eax, dword ptr [0xc1adc0]
// 009e3475  50                   push eax
// 009e3476  e81f45dcff           call 0x7a799a
// 009e347b  83c404               add esp, 4
// 009e347e  c705a4adc1001809a000 mov dword ptr [0xc1ada4], 0xa00918
// 009e3488  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3470(int);
void func_009e3470()
{
    G4_func_009e3470(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
