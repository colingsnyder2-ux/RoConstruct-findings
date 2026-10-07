// roc 2010-06 009e3230  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3230
//
// 009e3230  a160a9c100           mov eax, dword ptr [0xc1a960]
// 009e3235  50                   push eax
// 009e3236  e85f47dcff           call 0x7a799a
// 009e323b  83c404               add esp, 4
// 009e323e  c70544a9c1001809a000 mov dword ptr [0xc1a944], 0xa00918
// 009e3248  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3230(int);
void func_009e3230()
{
    G4_func_009e3230(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
