// roc 2010-06 009dcb00  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb00
//
// 009dcb00  a1444cc000           mov eax, dword ptr [0xc04c44]
// 009dcb05  50                   push eax
// 009dcb06  e88faedcff           call 0x7a799a
// 009dcb0b  83c404               add esp, 4
// 009dcb0e  c705284cc0001809a000 mov dword ptr [0xc04c28], 0xa00918
// 009dcb18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dcb00(int);
void func_009dcb00()
{
    G4_func_009dcb00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
