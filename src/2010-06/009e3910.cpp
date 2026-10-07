// roc 2010-06 009e3910  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3910
//
// 009e3910  a110b0c100           mov eax, dword ptr [0xc1b010]
// 009e3915  50                   push eax
// 009e3916  e87f40dcff           call 0x7a799a
// 009e391b  83c404               add esp, 4
// 009e391e  c705f4afc1001809a000 mov dword ptr [0xc1aff4], 0xa00918
// 009e3928  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3910(int);
void func_009e3910()
{
    G4_func_009e3910(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
