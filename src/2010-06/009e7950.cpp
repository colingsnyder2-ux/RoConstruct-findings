// roc 2010-06 009e7950  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7950
//
// 009e7950  a1500fc200           mov eax, dword ptr [0xc20f50]
// 009e7955  50                   push eax
// 009e7956  e83f00dcff           call 0x7a799a
// 009e795b  83c404               add esp, 4
// 009e795e  c705340fc2001809a000 mov dword ptr [0xc20f34], 0xa00918
// 009e7968  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7950(int);
void func_009e7950()
{
    G4_func_009e7950(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
