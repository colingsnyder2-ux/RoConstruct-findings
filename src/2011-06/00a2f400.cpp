// roc 2011-06 00a2f400  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f400
//
// 00a2f400  e81bace2ff           call 0x85a020
// 00a2f405  50                   push eax
// 00a2f406  e813b6ddff           call 0x80aa1e
// 00a2f40b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f400();
extern int __stdcall G2_func_00a2f400(int);
int func_00a2f400()
{
    return G2_func_00a2f400(G1_func_00a2f400());
}
