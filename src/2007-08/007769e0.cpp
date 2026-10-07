// roc 2007-08 007769e0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007769e0
//
// 007769e0  e82b70f0ff           call 0x67da10
// 007769e5  50                   push eax
// 007769e6  e8059bebff           call 0x6304f0
// 007769eb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007769e0();
extern int __stdcall G2_func_007769e0(int);
int func_007769e0()
{
    return G2_func_007769e0(G1_func_007769e0());
}
