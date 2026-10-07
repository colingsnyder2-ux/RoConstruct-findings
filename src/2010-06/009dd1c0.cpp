// roc 2010-06 009dd1c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd1c0
//
// 009dd1c0  a12061c000           mov eax, dword ptr [0xc06120]
// 009dd1c5  50                   push eax
// 009dd1c6  e8cfa7dcff           call 0x7a799a
// 009dd1cb  83c404               add esp, 4
// 009dd1ce  c7050461c0001809a000 mov dword ptr [0xc06104], 0xa00918
// 009dd1d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd1c0(int);
void func_009dd1c0()
{
    G4_func_009dd1c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
