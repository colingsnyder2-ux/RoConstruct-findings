// roc 2009-06 00892ba0  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892ba0
//
// 00892ba0  e8dbefecff           call 0x761b80
// 00892ba5  50                   push eax
// 00892ba6  e84d68e8ff           call 0x7193f8
// 00892bab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892ba0();
extern int __stdcall G2_func_00892ba0(int);
int func_00892ba0()
{
    return G2_func_00892ba0(G1_func_00892ba0());
}
