// roc 2010-06 009de6a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de6a0
//
// 009de6a0  a1d4b1c000           mov eax, dword ptr [0xc0b1d4]
// 009de6a5  50                   push eax
// 009de6a6  e8ef92dcff           call 0x7a799a
// 009de6ab  83c404               add esp, 4
// 009de6ae  c705b8b1c0001809a000 mov dword ptr [0xc0b1b8], 0xa00918
// 009de6b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de6a0(int);
void func_009de6a0()
{
    G4_func_009de6a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
