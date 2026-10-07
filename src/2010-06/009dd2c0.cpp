// roc 2010-06 009dd2c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd2c0
//
// 009dd2c0  a1e060c000           mov eax, dword ptr [0xc060e0]
// 009dd2c5  50                   push eax
// 009dd2c6  e8cfa6dcff           call 0x7a799a
// 009dd2cb  83c404               add esp, 4
// 009dd2ce  c705c460c0001809a000 mov dword ptr [0xc060c4], 0xa00918
// 009dd2d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd2c0(int);
void func_009dd2c0()
{
    G4_func_009dd2c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
