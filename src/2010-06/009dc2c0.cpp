// roc 2010-06 009dc2c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dc2c0
//
// 009dc2c0  a1bc44c000           mov eax, dword ptr [0xc044bc]
// 009dc2c5  50                   push eax
// 009dc2c6  e8cfb6dcff           call 0x7a799a
// 009dc2cb  83c404               add esp, 4
// 009dc2ce  c705a044c0001809a000 mov dword ptr [0xc044a0], 0xa00918
// 009dc2d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dc2c0(int);
void func_009dc2c0()
{
    G4_func_009dc2c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
