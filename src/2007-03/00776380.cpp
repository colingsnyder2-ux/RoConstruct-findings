// roc 2007-03 00776380  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00776380
//
// 00776380  e8eb7fedff           call 0x64e370
// 00776385  50                   push eax
// 00776386  e88389eaff           call 0x61ed0e
// 0077638b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776380();
extern int __stdcall G2_func_00776380(int);
int func_00776380()
{
    return G2_func_00776380(G1_func_00776380());
}
