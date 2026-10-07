// roc 2010-06 009e3590  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3590
//
// 009e3590  a100aec100           mov eax, dword ptr [0xc1ae00]
// 009e3595  50                   push eax
// 009e3596  e8ff43dcff           call 0x7a799a
// 009e359b  83c404               add esp, 4
// 009e359e  c705e4adc1001809a000 mov dword ptr [0xc1ade4], 0xa00918
// 009e35a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3590(int);
void func_009e3590()
{
    G4_func_009e3590(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
