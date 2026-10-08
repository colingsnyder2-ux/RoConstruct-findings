// roc 2007-03 00776350  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776350
//
// 00776350  e83b7cedff           call 0x64df90
// 00776355  50                   push eax
// 00776356  e8b389eaff           call 0x61ed0e
// 0077635b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776350();
extern int __stdcall G2_func_00776350(int);
int func_00776350()
{
    return G2_func_00776350(G1_func_00776350());
}
