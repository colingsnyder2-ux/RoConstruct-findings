// roc 2010-06 009e7d10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7d10
//
// 009e7d10  a19c17c200           mov eax, dword ptr [0xc2179c]
// 009e7d15  50                   push eax
// 009e7d16  e87ffcdbff           call 0x7a799a
// 009e7d1b  83c404               add esp, 4
// 009e7d1e  c7057c17c2001809a000 mov dword ptr [0xc2177c], 0xa00918
// 009e7d28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7d10(int);
void func_009e7d10()
{
    G4_func_009e7d10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
