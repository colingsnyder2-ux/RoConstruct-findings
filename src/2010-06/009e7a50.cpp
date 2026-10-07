// roc 2010-06 009e7a50  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7a50
//
// 009e7a50  a13c11c200           mov eax, dword ptr [0xc2113c]
// 009e7a55  50                   push eax
// 009e7a56  e83fffdbff           call 0x7a799a
// 009e7a5b  83c404               add esp, 4
// 009e7a5e  c7051c11c2001809a000 mov dword ptr [0xc2111c], 0xa00918
// 009e7a68  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7a50(int);
void func_009e7a50()
{
    G4_func_009e7a50(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
