// roc 2008-06 007f9960  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9960
//
// 007f9960  e89b86f2ff           call 0x722000
// 007f9965  50                   push eax
// 007f9966  e81b76eaff           call 0x6a0f86
// 007f996b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9960();
extern int __stdcall G2_func_007f9960(int);
int func_007f9960()
{
    return G2_func_007f9960(G1_func_007f9960());
}
