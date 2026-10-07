// roc 2010-06 009e8480  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8480
//
// 009e8480  a10c20c200           mov eax, dword ptr [0xc2200c]
// 009e8485  50                   push eax
// 009e8486  e80ff5dbff           call 0x7a799a
// 009e848b  83c404               add esp, 4
// 009e848e  c705f01fc2001809a000 mov dword ptr [0xc21ff0], 0xa00918
// 009e8498  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8480(int);
void func_009e8480()
{
    G4_func_009e8480(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
