// roc 2010-06 009d9600  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9600
//
// 009d9600  e87b57e0ff           call 0x7ded80
// 009d9605  50                   push eax
// 009d9606  e855eddcff           call 0x7a8360
// 009d960b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9600();
extern int __stdcall G2_func_009d9600(int);
int func_009d9600()
{
    return G2_func_009d9600(G1_func_009d9600());
}
