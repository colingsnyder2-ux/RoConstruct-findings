// roc 2010-06 009e84e0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e84e0
//
// 009e84e0  a16c1fc200           mov eax, dword ptr [0xc21f6c]
// 009e84e5  50                   push eax
// 009e84e6  e8aff4dbff           call 0x7a799a
// 009e84eb  83c404               add esp, 4
// 009e84ee  c705501fc2001809a000 mov dword ptr [0xc21f50], 0xa00918
// 009e84f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e84e0(int);
void func_009e84e0()
{
    G4_func_009e84e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
