// roc 2011-06 00a2f420  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f420
//
// 00a2f420  e8fbade2ff           call 0x85a220
// 00a2f425  50                   push eax
// 00a2f426  e8f3b5ddff           call 0x80aa1e
// 00a2f42b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f420();
extern int __stdcall G2_func_00a2f420(int);
int func_00a2f420()
{
    return G2_func_00a2f420(G1_func_00a2f420());
}
