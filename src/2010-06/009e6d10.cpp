// roc 2010-06 009e6d10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6d10
//
// 009e6d10  a10002c200           mov eax, dword ptr [0xc20200]
// 009e6d15  50                   push eax
// 009e6d16  e87f0cdcff           call 0x7a799a
// 009e6d1b  83c404               add esp, 4
// 009e6d1e  c705e001c2001809a000 mov dword ptr [0xc201e0], 0xa00918
// 009e6d28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6d10(int);
void func_009e6d10()
{
    G4_func_009e6d10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
