// roc 2011-06 00a2ee40  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee40
//
// 00a2ee40  e8fbf7e0ff           call 0x83e640
// 00a2ee45  50                   push eax
// 00a2ee46  e8d3bbddff           call 0x80aa1e
// 00a2ee4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee40();
extern int __stdcall G2_func_00a2ee40(int);
int func_00a2ee40()
{
    return G2_func_00a2ee40(G1_func_00a2ee40());
}
