// roc 2010-06 009dd2e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd2e0
//
// 009dd2e0  a14c5fc000           mov eax, dword ptr [0xc05f4c]
// 009dd2e5  50                   push eax
// 009dd2e6  e8afa6dcff           call 0x7a799a
// 009dd2eb  83c404               add esp, 4
// 009dd2ee  c705305fc0001809a000 mov dword ptr [0xc05f30], 0xa00918
// 009dd2f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd2e0(int);
void func_009dd2e0()
{
    G4_func_009dd2e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
