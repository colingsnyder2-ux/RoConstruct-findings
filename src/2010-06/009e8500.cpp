// roc 2010-06 009e8500  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8500
//
// 009e8500  a16c20c200           mov eax, dword ptr [0xc2206c]
// 009e8505  50                   push eax
// 009e8506  e88ff4dbff           call 0x7a799a
// 009e850b  83c404               add esp, 4
// 009e850e  c7055020c2001809a000 mov dword ptr [0xc22050], 0xa00918
// 009e8518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8500(int);
void func_009e8500()
{
    G4_func_009e8500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
