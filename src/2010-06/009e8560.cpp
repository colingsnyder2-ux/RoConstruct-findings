// roc 2010-06 009e8560  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8560
//
// 009e8560  a10c22c200           mov eax, dword ptr [0xc2220c]
// 009e8565  50                   push eax
// 009e8566  e82ff4dbff           call 0x7a799a
// 009e856b  83c404               add esp, 4
// 009e856e  c705f021c2001809a000 mov dword ptr [0xc221f0], 0xa00918
// 009e8578  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8560(int);
void func_009e8560()
{
    G4_func_009e8560(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
