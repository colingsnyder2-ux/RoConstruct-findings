// roc 2009-06 008931d0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008931d0
//
// 008931d0  e81b98f0ff           call 0x79c9f0
// 008931d5  50                   push eax
// 008931d6  e81d62e8ff           call 0x7193f8
// 008931db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008931d0();
extern int __stdcall G2_func_008931d0(int);
int func_008931d0()
{
    return G2_func_008931d0(G1_func_008931d0());
}
