// roc 2008-06 007f9870  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9870
//
// 007f9870  e8abb7efff           call 0x6f5020
// 007f9875  50                   push eax
// 007f9876  e80b77eaff           call 0x6a0f86
// 007f987b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9870();
extern int __stdcall G2_func_007f9870(int);
int func_007f9870()
{
    return G2_func_007f9870(G1_func_007f9870());
}
