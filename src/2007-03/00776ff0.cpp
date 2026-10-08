// roc 2007-03 00776ff0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776ff0
//
// 00776ff0  e86b8ef9ff           call 0x70fe60
// 00776ff5  50                   push eax
// 00776ff6  e8137deaff           call 0x61ed0e
// 00776ffb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776ff0();
extern int __stdcall G2_func_00776ff0(int);
int func_00776ff0()
{
    return G2_func_00776ff0(G1_func_00776ff0());
}
