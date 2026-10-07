// roc 2010-06 009de320  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de320
//
// 009de320  a1a0adc000           mov eax, dword ptr [0xc0ada0]
// 009de325  50                   push eax
// 009de326  e86f96dcff           call 0x7a799a
// 009de32b  83c404               add esp, 4
// 009de32e  c70584adc0001809a000 mov dword ptr [0xc0ad84], 0xa00918
// 009de338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de320(int);
void func_009de320()
{
    G4_func_009de320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
