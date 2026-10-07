// roc 2010-06 009e44a0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e44a0
//
// 009e44a0  a1fcc7c100           mov eax, dword ptr [0xc1c7fc]
// 009e44a5  50                   push eax
// 009e44a6  e8ef34dcff           call 0x7a799a
// 009e44ab  83c404               add esp, 4
// 009e44ae  c705e0c7c1001809a000 mov dword ptr [0xc1c7e0], 0xa00918
// 009e44b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e44a0(int);
void func_009e44a0()
{
    G4_func_009e44a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
