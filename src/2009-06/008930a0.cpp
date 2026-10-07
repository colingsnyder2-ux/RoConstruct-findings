// roc 2009-06 008930a0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008930a0
//
// 008930a0  e8cbebecff           call 0x761c70
// 008930a5  50                   push eax
// 008930a6  e84d63e8ff           call 0x7193f8
// 008930ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_008930a0();
extern int __stdcall G2_func_008930a0(int);
int func_008930a0()
{
    return G2_func_008930a0(G1_func_008930a0());
}
