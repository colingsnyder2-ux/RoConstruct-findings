// roc 2008-06 007f9950  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9950
//
// 007f9950  e87b84f2ff           call 0x721dd0
// 007f9955  50                   push eax
// 007f9956  e82b76eaff           call 0x6a0f86
// 007f995b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9950();
extern int __stdcall G2_func_007f9950(int);
int func_007f9950()
{
    return G2_func_007f9950(G1_func_007f9950());
}
