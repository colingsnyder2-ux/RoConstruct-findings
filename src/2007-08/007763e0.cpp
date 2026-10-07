// roc 2007-08 007763e0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007763e0
//
// 007763e0  e81bc1eeff           call 0x662500
// 007763e5  50                   push eax
// 007763e6  e805a1ebff           call 0x6304f0
// 007763eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007763e0();
extern int __stdcall G2_func_007763e0(int);
int func_007763e0()
{
    return G2_func_007763e0(G1_func_007763e0());
}
