// roc 2008-06 007f9ed0  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9ed0
//
// 007f9ed0  e8eb4cfaff           call 0x79ebc0
// 007f9ed5  50                   push eax
// 007f9ed6  e8ab70eaff           call 0x6a0f86
// 007f9edb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9ed0();
extern int __stdcall G2_func_007f9ed0(int);
int func_007f9ed0()
{
    return G2_func_007f9ed0(G1_func_007f9ed0());
}
