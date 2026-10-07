// roc 2010-06 009dc200  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc200
//
// 009dc200  a1dc44c000           mov eax, dword ptr [0xc044dc]
// 009dc205  50                   push eax
// 009dc206  e88fb7dcff           call 0x7a799a
// 009dc20b  83c404               add esp, 4
// 009dc20e  c705c044c0001809a000 mov dword ptr [0xc044c0], 0xa00918
// 009dc218  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc200(int);
void func_009dc200()
{
    G4_func_009dc200(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
