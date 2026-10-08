// roc 2007-03 00776920  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776920
//
// 00776920  e8dbfaefff           call 0x676400
// 00776925  50                   push eax
// 00776926  e8e383eaff           call 0x61ed0e
// 0077692b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776920();
extern int __stdcall G2_func_00776920(int);
int func_00776920()
{
    return G2_func_00776920(G1_func_00776920());
}
