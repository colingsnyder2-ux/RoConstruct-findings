// roc 2010-06 009de6c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de6c0
//
// 009de6c0  a114b2c000           mov eax, dword ptr [0xc0b214]
// 009de6c5  50                   push eax
// 009de6c6  e8cf92dcff           call 0x7a799a
// 009de6cb  83c404               add esp, 4
// 009de6ce  c705f8b1c0001809a000 mov dword ptr [0xc0b1f8], 0xa00918
// 009de6d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de6c0(int);
void func_009de6c0()
{
    G4_func_009de6c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
