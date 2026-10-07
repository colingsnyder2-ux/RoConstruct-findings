// roc 2010-06 009e79d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e79d0
//
// 009e79d0  a10c10c200           mov eax, dword ptr [0xc2100c]
// 009e79d5  50                   push eax
// 009e79d6  e8bfffdbff           call 0x7a799a
// 009e79db  83c404               add esp, 4
// 009e79de  c705f00fc2001809a000 mov dword ptr [0xc20ff0], 0xa00918
// 009e79e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e79d0(int);
void func_009e79d0()
{
    G4_func_009e79d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
