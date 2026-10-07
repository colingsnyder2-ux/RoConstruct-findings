// roc 2007-08 00776930  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00776930
//
// 00776930  e81bbbefff           call 0x672450
// 00776935  50                   push eax
// 00776936  e8b59bebff           call 0x6304f0
// 0077693b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00776930();
extern int __stdcall G2_func_00776930(int);
int func_00776930()
{
    return G2_func_00776930(G1_func_00776930());
}
