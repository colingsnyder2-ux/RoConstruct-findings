// roc 2007-08 00776330  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776330
//
// 00776330  e84bd5edff           call 0x653880
// 00776335  50                   push eax
// 00776336  e8b5a1ebff           call 0x6304f0
// 0077633b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776330();
extern int __stdcall G2_func_00776330(int);
int func_00776330()
{
    return G2_func_00776330(G1_func_00776330());
}
