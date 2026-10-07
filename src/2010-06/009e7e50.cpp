// roc 2010-06 009e7e50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7e50
//
// 009e7e50  a1501bc200           mov eax, dword ptr [0xc21b50]
// 009e7e55  50                   push eax
// 009e7e56  e83ffbdbff           call 0x7a799a
// 009e7e5b  83c404               add esp, 4
// 009e7e5e  c705341bc2001809a000 mov dword ptr [0xc21b34], 0xa00918
// 009e7e68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7e50(int);
void func_009e7e50()
{
    G4_func_009e7e50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
