// roc 2010-06 009d9640  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9640
//
// 009d9640  e8cb60e0ff           call 0x7df710
// 009d9645  50                   push eax
// 009d9646  e815eddcff           call 0x7a8360
// 009d964b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9640();
extern int __stdcall G2_func_009d9640(int);
int func_009d9640()
{
    return G2_func_009d9640(G1_func_009d9640());
}
