// roc 2007-08 007763d0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007763d0
//
// 007763d0  e89bbfeeff           call 0x662370
// 007763d5  50                   push eax
// 007763d6  e815a1ebff           call 0x6304f0
// 007763db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763d0();
extern int __stdcall G2_func_007763d0(int);
int func_007763d0()
{
    return G2_func_007763d0(G1_func_007763d0());
}
