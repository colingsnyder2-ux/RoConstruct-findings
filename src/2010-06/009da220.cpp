// roc 2010-06 009da220  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da220
//
// 009da220  e8cbbaecff           call 0x8a5cf0
// 009da225  50                   push eax
// 009da226  e835e1dcff           call 0x7a8360
// 009da22b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da220();
extern int __stdcall G2_func_009da220(int);
int func_009da220()
{
    return G2_func_009da220(G1_func_009da220());
}
