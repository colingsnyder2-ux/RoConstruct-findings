// roc 2011-06 00a2eea0  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2eea0
//
// 00a2eea0  e87b25e1ff           call 0x841420
// 00a2eea5  50                   push eax
// 00a2eea6  e873bbddff           call 0x80aa1e
// 00a2eeab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2eea0();
extern int __stdcall G2_func_00a2eea0(int);
int func_00a2eea0()
{
    return G2_func_00a2eea0(G1_func_00a2eea0());
}
