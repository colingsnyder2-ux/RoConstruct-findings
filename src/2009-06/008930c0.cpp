// roc 2009-06 008930c0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930c0
//
// 008930c0  e80b40edff           call 0x7670d0
// 008930c5  50                   push eax
// 008930c6  e82d63e8ff           call 0x7193f8
// 008930cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930c0();
extern int __stdcall G2_func_008930c0(int);
int func_008930c0()
{
    return G2_func_008930c0(G1_func_008930c0());
}
