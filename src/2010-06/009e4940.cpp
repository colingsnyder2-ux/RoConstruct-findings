// roc 2010-06 009e4940  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4940
//
// 009e4940  a190cdc100           mov eax, dword ptr [0xc1cd90]
// 009e4945  50                   push eax
// 009e4946  e84f30dcff           call 0x7a799a
// 009e494b  83c404               add esp, 4
// 009e494e  c70574cdc1001809a000 mov dword ptr [0xc1cd74], 0xa00918
// 009e4958  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4940(int);
void func_009e4940()
{
    G4_func_009e4940(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
