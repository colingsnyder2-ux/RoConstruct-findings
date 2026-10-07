// roc 2010-06 009dd300  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd300
//
// 009dd300  a1cc5fc000           mov eax, dword ptr [0xc05fcc]
// 009dd305  50                   push eax
// 009dd306  e88fa6dcff           call 0x7a799a
// 009dd30b  83c404               add esp, 4
// 009dd30e  c705b05fc0001809a000 mov dword ptr [0xc05fb0], 0xa00918
// 009dd318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd300(int);
void func_009dd300()
{
    G4_func_009dd300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
