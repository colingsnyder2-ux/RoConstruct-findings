// roc 2009-06 00892b70  unit: seg_00890000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00892b70
//
// 00892b70  e8cbdeebff           call 0x750a40
// 00892b75  50                   push eax
// 00892b76  e87d68e8ff           call 0x7193f8
// 00892b7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00892b70();
extern int __stdcall G2_func_00892b70(int);
int func_00892b70()
{
    return G2_func_00892b70(G1_func_00892b70());
}
