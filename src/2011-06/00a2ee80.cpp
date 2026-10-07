// roc 2011-06 00a2ee80  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee80
//
// 00a2ee80  e8ab23e1ff           call 0x841230
// 00a2ee85  50                   push eax
// 00a2ee86  e893bbddff           call 0x80aa1e
// 00a2ee8b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee80();
extern int __stdcall G2_func_00a2ee80(int);
int func_00a2ee80()
{
    return G2_func_00a2ee80(G1_func_00a2ee80());
}
