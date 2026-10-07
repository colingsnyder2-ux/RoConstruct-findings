// roc 2010-06 009e4460  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4460
//
// 009e4460  a104cbc100           mov eax, dword ptr [0xc1cb04]
// 009e4465  50                   push eax
// 009e4466  e82f35dcff           call 0x7a799a
// 009e446b  83c404               add esp, 4
// 009e446e  c705e8cac1001809a000 mov dword ptr [0xc1cae8], 0xa00918
// 009e4478  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4460(int);
void func_009e4460()
{
    G4_func_009e4460(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
