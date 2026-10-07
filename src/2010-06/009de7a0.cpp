// roc 2010-06 009de7a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de7a0
//
// 009de7a0  a160adc000           mov eax, dword ptr [0xc0ad60]
// 009de7a5  50                   push eax
// 009de7a6  e8ef91dcff           call 0x7a799a
// 009de7ab  83c404               add esp, 4
// 009de7ae  c70544adc0001809a000 mov dword ptr [0xc0ad44], 0xa00918
// 009de7b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de7a0(int);
void func_009de7a0()
{
    G4_func_009de7a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
