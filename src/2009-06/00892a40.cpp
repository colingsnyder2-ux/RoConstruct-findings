// roc 2009-06 00892a40  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892a40
//
// 00892a40  e80ba6e9ff           call 0x72d050
// 00892a45  50                   push eax
// 00892a46  e8ad69e8ff           call 0x7193f8
// 00892a4b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892a40();
extern int __stdcall G2_func_00892a40(int);
int func_00892a40()
{
    return G2_func_00892a40(G1_func_00892a40());
}
