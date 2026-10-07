// roc 2010-06 009e70d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e70d0
//
// 009e70d0  a1fc06c200           mov eax, dword ptr [0xc206fc]
// 009e70d5  50                   push eax
// 009e70d6  e8bf08dcff           call 0x7a799a
// 009e70db  83c404               add esp, 4
// 009e70de  c705e006c2001809a000 mov dword ptr [0xc206e0], 0xa00918
// 009e70e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e70d0(int);
void func_009e70d0()
{
    G4_func_009e70d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
