// roc 2007-08 00776420  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776420
//
// 00776420  e89bbeefff           call 0x6722c0
// 00776425  50                   push eax
// 00776426  e8c5a0ebff           call 0x6304f0
// 0077642b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776420();
extern int __stdcall G2_func_00776420(int);
int func_00776420()
{
    return G2_func_00776420(G1_func_00776420());
}
