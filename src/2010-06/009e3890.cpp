// roc 2010-06 009e3890  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3890
//
// 009e3890  a1bcb4c100           mov eax, dword ptr [0xc1b4bc]
// 009e3895  50                   push eax
// 009e3896  e8ff40dcff           call 0x7a799a
// 009e389b  83c404               add esp, 4
// 009e389e  c705a0b4c1001809a000 mov dword ptr [0xc1b4a0], 0xa00918
// 009e38a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3890(int);
void func_009e3890()
{
    G4_func_009e3890(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
