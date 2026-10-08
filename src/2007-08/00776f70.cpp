// roc 2007-08 00776f70  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00776f70
//
// 00776f70  e86b2bfaff           call 0x719ae0
// 00776f75  50                   push eax
// 00776f76  e87595ebff           call 0x6304f0
// 00776f7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776f70();
extern int __stdcall G2_func_00776f70(int);
int func_00776f70()
{
    return G2_func_00776f70(G1_func_00776f70());
}
