// roc 2010-06 009d9650  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9650
//
// 009d9650  e8eb61e0ff           call 0x7df840
// 009d9655  50                   push eax
// 009d9656  e805eddcff           call 0x7a8360
// 009d965b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9650();
extern int __stdcall G2_func_009d9650(int);
int func_009d9650()
{
    return G2_func_009d9650(G1_func_009d9650());
}
