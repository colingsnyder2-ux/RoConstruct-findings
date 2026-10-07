// roc 2007-08 00776290  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776290
//
// 00776290  e85bfeebff           call 0x6360f0
// 00776295  50                   push eax
// 00776296  e855a2ebff           call 0x6304f0
// 0077629b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776290();
extern int __stdcall G2_func_00776290(int);
int func_00776290()
{
    return G2_func_00776290(G1_func_00776290());
}
