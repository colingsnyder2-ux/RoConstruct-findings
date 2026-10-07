// roc 2010-06 009de5a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de5a0
//
// 009de5a0  a14cafc000           mov eax, dword ptr [0xc0af4c]
// 009de5a5  50                   push eax
// 009de5a6  e8ef93dcff           call 0x7a799a
// 009de5ab  83c404               add esp, 4
// 009de5ae  c70530afc0001809a000 mov dword ptr [0xc0af30], 0xa00918
// 009de5b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de5a0(int);
void func_009de5a0()
{
    G4_func_009de5a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
