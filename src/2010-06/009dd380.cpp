// roc 2010-06 009dd380  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd380
//
// 009dd380  a12c5fc000           mov eax, dword ptr [0xc05f2c]
// 009dd385  50                   push eax
// 009dd386  e80fa6dcff           call 0x7a799a
// 009dd38b  83c404               add esp, 4
// 009dd38e  c705105fc0001809a000 mov dword ptr [0xc05f10], 0xa00918
// 009dd398  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd380(int);
void func_009dd380()
{
    G4_func_009dd380(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
