// roc 2011-06 00a2f540  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f540
//
// 00a2f540  e80b67e7ff           call 0x8a5c50
// 00a2f545  50                   push eax
// 00a2f546  e8d3b4ddff           call 0x80aa1e
// 00a2f54b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f540();
extern int __stdcall G2_func_00a2f540(int);
int func_00a2f540()
{
    return G2_func_00a2f540(G1_func_00a2f540());
}
