// roc 2007-08 007769a0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007769a0
//
// 007769a0  e8fb6ef0ff           call 0x67d8a0
// 007769a5  50                   push eax
// 007769a6  e8459bebff           call 0x6304f0
// 007769ab  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007769a0();
extern int __stdcall G2_func_007769a0(int);
int func_007769a0()
{
    return G2_func_007769a0(G1_func_007769a0());
}
