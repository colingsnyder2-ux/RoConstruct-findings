// roc 2009-06 008931c0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931c0
//
// 008931c0  e8fb91f0ff           call 0x79c3c0
// 008931c5  50                   push eax
// 008931c6  e82d62e8ff           call 0x7193f8
// 008931cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008931c0();
extern int __stdcall G2_func_008931c0(int);
int func_008931c0()
{
    return G2_func_008931c0(G1_func_008931c0());
}
