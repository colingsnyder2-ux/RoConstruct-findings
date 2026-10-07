// roc 2008-06 007f9e50  unit: seg_007f0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f9e50
//
// 007f9e50  e82bf3f9ff           call 0x799180
// 007f9e55  50                   push eax
// 007f9e56  e82b71eaff           call 0x6a0f86
// 007f9e5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_007f9e50();
extern int __stdcall G2_func_007f9e50(int);
int func_007f9e50()
{
    return G2_func_007f9e50(G1_func_007f9e50());
}
