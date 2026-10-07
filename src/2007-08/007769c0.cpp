// roc 2007-08 007769c0  unit: seg_00770000  size: 12 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007769c0
//
// 007769c0  e89b6ff0ff           call 0x67d960
// 007769c5  50                   push eax
// 007769c6  e8259bebff           call 0x6304f0
// 007769cb  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007769c0();
extern int __stdcall G2_func_007769c0(int);
int func_007769c0()
{
    return G2_func_007769c0(G1_func_007769c0());
}
