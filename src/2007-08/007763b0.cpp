// roc 2007-08 007763b0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007763b0
//
// 007763b0  e81bb9eeff           call 0x661cd0
// 007763b5  50                   push eax
// 007763b6  e835a1ebff           call 0x6304f0
// 007763bb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763b0();
extern int __stdcall G2_func_007763b0(int);
int func_007763b0()
{
    return G2_func_007763b0(G1_func_007763b0());
}
