// roc 2011-06 00a2ed10  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed10
//
// 00a2ed10  e85b7cdeff           call 0x816970
// 00a2ed15  50                   push eax
// 00a2ed16  e803bdddff           call 0x80aa1e
// 00a2ed1b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ed10();
extern int __stdcall G2_func_00a2ed10(int);
int func_00a2ed10()
{
    return G2_func_00a2ed10(G1_func_00a2ed10());
}
