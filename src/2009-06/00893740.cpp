// roc 2009-06 00893740  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00893740
//
// 00893740  e8bb28f8ff           call 0x816000
// 00893745  50                   push eax
// 00893746  e8ad5ce8ff           call 0x7193f8
// 0089374b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00893740();
extern int __stdcall G2_func_00893740(int);
int func_00893740()
{
    return G2_func_00893740(G1_func_00893740());
}
