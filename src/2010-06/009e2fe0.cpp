// roc 2010-06 009e2fe0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2fe0
//
// 009e2fe0  a1eca2c100           mov eax, dword ptr [0xc1a2ec]
// 009e2fe5  50                   push eax
// 009e2fe6  e8af49dcff           call 0x7a799a
// 009e2feb  83c404               add esp, 4
// 009e2fee  c705d0a2c1001809a000 mov dword ptr [0xc1a2d0], 0xa00918
// 009e2ff8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2fe0(int);
void func_009e2fe0()
{
    G4_func_009e2fe0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
