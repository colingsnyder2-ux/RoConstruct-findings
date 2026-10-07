// roc 2009-06 008930b0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930b0
//
// 008930b0  e8eb3aedff           call 0x766ba0
// 008930b5  50                   push eax
// 008930b6  e83d63e8ff           call 0x7193f8
// 008930bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930b0();
extern int __stdcall G2_func_008930b0(int);
int func_008930b0()
{
    return G2_func_008930b0(G1_func_008930b0());
}
