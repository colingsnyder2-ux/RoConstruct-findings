// roc 2010-06 009e4280  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4280
//
// 009e4280  a1c4c9c100           mov eax, dword ptr [0xc1c9c4]
// 009e4285  50                   push eax
// 009e4286  e80f37dcff           call 0x7a799a
// 009e428b  83c404               add esp, 4
// 009e428e  c705a8c9c1001809a000 mov dword ptr [0xc1c9a8], 0xa00918
// 009e4298  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4280(int);
void func_009e4280()
{
    G4_func_009e4280(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
