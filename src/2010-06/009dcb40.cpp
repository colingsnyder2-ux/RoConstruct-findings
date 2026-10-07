// roc 2010-06 009dcb40  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb40
//
// 009dcb40  a1244cc000           mov eax, dword ptr [0xc04c24]
// 009dcb45  50                   push eax
// 009dcb46  e84faedcff           call 0x7a799a
// 009dcb4b  83c404               add esp, 4
// 009dcb4e  c705084cc0001809a000 mov dword ptr [0xc04c08], 0xa00918
// 009dcb58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dcb40(int);
void func_009dcb40()
{
    G4_func_009dcb40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
