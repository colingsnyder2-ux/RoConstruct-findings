// roc 2010-06 009e4060  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4060
//
// 009e4060  a18cc2c100           mov eax, dword ptr [0xc1c28c]
// 009e4065  50                   push eax
// 009e4066  e82f39dcff           call 0x7a799a
// 009e406b  83c404               add esp, 4
// 009e406e  c70570c2c1001809a000 mov dword ptr [0xc1c270], 0xa00918
// 009e4078  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4060(int);
void func_009e4060()
{
    G4_func_009e4060(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
