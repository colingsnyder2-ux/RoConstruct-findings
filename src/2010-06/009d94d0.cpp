// roc 2010-06 009d94d0  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d94d0
//
// 009d94d0  e89bedddff           call 0x7b8270
// 009d94d5  50                   push eax
// 009d94d6  e885eedcff           call 0x7a8360
// 009d94db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d94d0();
extern int __stdcall G2_func_009d94d0(int);
int func_009d94d0()
{
    return G2_func_009d94d0(G1_func_009d94d0());
}
