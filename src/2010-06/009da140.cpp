// roc 2010-06 009da140  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009da140
//
// 009da140  e8bbfae9ff           call 0x879c00
// 009da145  50                   push eax
// 009da146  e815e2dcff           call 0x7a8360
// 009da14b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009da140();
extern int __stdcall G2_func_009da140(int);
int func_009da140()
{
    return G2_func_009da140(G1_func_009da140());
}
