// roc 2007-08 007769d0  unit: seg_00770000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007769d0
//
// 007769d0  e8fb6ff0ff           call 0x67d9d0
// 007769d5  50                   push eax
// 007769d6  e8159bebff           call 0x6304f0
// 007769db  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007769d0();
extern int __stdcall G2_func_007769d0(int);
int func_007769d0()
{
    return G2_func_007769d0(G1_func_007769d0());
}
