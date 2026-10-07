// roc 2010-06 009dcb60  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dcb60
//
// 009dcb60  a16c4fc000           mov eax, dword ptr [0xc04f6c]
// 009dcb65  50                   push eax
// 009dcb66  e82faedcff           call 0x7a799a
// 009dcb6b  83c404               add esp, 4
// 009dcb6e  c705504fc0001809a000 mov dword ptr [0xc04f50], 0xa00918
// 009dcb78  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dcb60(int);
void func_009dcb60()
{
    G4_func_009dcb60(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
