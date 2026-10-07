// roc 2011-06 00a2f4e0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f4e0
//
// 00a2f4e0  e8fb20e5ff           call 0x8815e0
// 00a2f4e5  50                   push eax
// 00a2f4e6  e833b5ddff           call 0x80aa1e
// 00a2f4eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f4e0();
extern int __stdcall G2_func_00a2f4e0(int);
int func_00a2f4e0()
{
    return G2_func_00a2f4e0(G1_func_00a2f4e0());
}
