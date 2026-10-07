// roc 2009-06 008930d0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930d0
//
// 008930d0  e8dba6edff           call 0x76d7b0
// 008930d5  50                   push eax
// 008930d6  e81d63e8ff           call 0x7193f8
// 008930db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930d0();
extern int __stdcall G2_func_008930d0(int);
int func_008930d0()
{
    return G2_func_008930d0(G1_func_008930d0());
}
