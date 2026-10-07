// roc 2010-06 009e38b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e38b0
//
// 009e38b0  a130b0c100           mov eax, dword ptr [0xc1b030]
// 009e38b5  50                   push eax
// 009e38b6  e8df40dcff           call 0x7a799a
// 009e38bb  83c404               add esp, 4
// 009e38be  c70514b0c1001809a000 mov dword ptr [0xc1b014], 0xa00918
// 009e38c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e38b0(int);
void func_009e38b0()
{
    G4_func_009e38b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
