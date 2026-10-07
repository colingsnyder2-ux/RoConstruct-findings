// roc 2010-06 009de6e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de6e0
//
// 009de6e0  a1c4adc000           mov eax, dword ptr [0xc0adc4]
// 009de6e5  50                   push eax
// 009de6e6  e8af92dcff           call 0x7a799a
// 009de6eb  83c404               add esp, 4
// 009de6ee  c705a4adc0001809a000 mov dword ptr [0xc0ada4], 0xa00918
// 009de6f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de6e0(int);
void func_009de6e0()
{
    G4_func_009de6e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
