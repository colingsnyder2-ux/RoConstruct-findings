// roc 2010-06 009e8440  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e8440
//
// 009e8440  a10c1fc200           mov eax, dword ptr [0xc21f0c]
// 009e8445  50                   push eax
// 009e8446  e84ff5dbff           call 0x7a799a
// 009e844b  83c404               add esp, 4
// 009e844e  c705f01ec2001809a000 mov dword ptr [0xc21ef0], 0xa00918
// 009e8458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e8440(int);
void func_009e8440()
{
    G4_func_009e8440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
