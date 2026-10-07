// roc 2010-06 009e8460  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8460
//
// 009e8460  a1cc20c200           mov eax, dword ptr [0xc220cc]
// 009e8465  50                   push eax
// 009e8466  e82ff5dbff           call 0x7a799a
// 009e846b  83c404               add esp, 4
// 009e846e  c705b020c2001809a000 mov dword ptr [0xc220b0], 0xa00918
// 009e8478  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8460(int);
void func_009e8460()
{
    G4_func_009e8460(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
