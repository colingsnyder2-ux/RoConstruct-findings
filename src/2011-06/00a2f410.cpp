// roc 2011-06 00a2f410  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f410
//
// 00a2f410  e8dbade2ff           call 0x85a1f0
// 00a2f415  50                   push eax
// 00a2f416  e803b6ddff           call 0x80aa1e
// 00a2f41b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f410();
extern int __stdcall G2_func_00a2f410(int);
int func_00a2f410()
{
    return G2_func_00a2f410(G1_func_00a2f410());
}
