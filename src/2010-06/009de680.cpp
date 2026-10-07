// roc 2010-06 009de680  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de680
//
// 009de680  a11cadc000           mov eax, dword ptr [0xc0ad1c]
// 009de685  50                   push eax
// 009de686  e80f93dcff           call 0x7a799a
// 009de68b  83c404               add esp, 4
// 009de68e  c705fcacc0001809a000 mov dword ptr [0xc0acfc], 0xa00918
// 009de698  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de680(int);
void func_009de680()
{
    G4_func_009de680(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
