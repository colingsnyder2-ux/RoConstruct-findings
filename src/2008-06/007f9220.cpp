// roc 2008-06 007f9220  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9220
//
// 007f9220  e82bdaecff           call 0x6c6c50
// 007f9225  50                   push eax
// 007f9226  e85b7deaff           call 0x6a0f86
// 007f922b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9220();
extern int __stdcall G2_func_007f9220(int);
int func_007f9220()
{
    return G2_func_007f9220(G1_func_007f9220());
}
