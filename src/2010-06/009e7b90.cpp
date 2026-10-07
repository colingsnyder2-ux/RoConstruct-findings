// roc 2010-06 009e7b90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7b90
//
// 009e7b90  a16c13c200           mov eax, dword ptr [0xc2136c]
// 009e7b95  50                   push eax
// 009e7b96  e8fffddbff           call 0x7a799a
// 009e7b9b  83c404               add esp, 4
// 009e7b9e  c7054c13c2001809a000 mov dword ptr [0xc2134c], 0xa00918
// 009e7ba8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7b90(int);
void func_009e7b90()
{
    G4_func_009e7b90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
