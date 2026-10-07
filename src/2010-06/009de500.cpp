// roc 2010-06 009de500  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de500
//
// 009de500  a12cabc000           mov eax, dword ptr [0xc0ab2c]
// 009de505  50                   push eax
// 009de506  e88f94dcff           call 0x7a799a
// 009de50b  83c404               add esp, 4
// 009de50e  c70510abc0001809a000 mov dword ptr [0xc0ab10], 0xa00918
// 009de518  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de500(int);
void func_009de500()
{
    G4_func_009de500(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
