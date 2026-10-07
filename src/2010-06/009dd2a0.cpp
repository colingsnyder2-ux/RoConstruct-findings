// roc 2010-06 009dd2a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd2a0
//
// 009dd2a0  a16461c000           mov eax, dword ptr [0xc06164]
// 009dd2a5  50                   push eax
// 009dd2a6  e8efa6dcff           call 0x7a799a
// 009dd2ab  83c404               add esp, 4
// 009dd2ae  c7054861c0001809a000 mov dword ptr [0xc06148], 0xa00918
// 009dd2b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd2a0(int);
void func_009dd2a0()
{
    G4_func_009dd2a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
