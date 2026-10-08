// roc 2007-03 00776930  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776930
//
// 00776930  e86bfcefff           call 0x6765a0
// 00776935  50                   push eax
// 00776936  e8d383eaff           call 0x61ed0e
// 0077693b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776930();
extern int __stdcall G2_func_00776930(int);
int func_00776930()
{
    return G2_func_00776930(G1_func_00776930());
}
