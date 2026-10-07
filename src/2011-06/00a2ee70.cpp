// roc 2011-06 00a2ee70  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee70
//
// 00a2ee70  e83b22e1ff           call 0x8410b0
// 00a2ee75  50                   push eax
// 00a2ee76  e8a3bbddff           call 0x80aa1e
// 00a2ee7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee70();
extern int __stdcall G2_func_00a2ee70(int);
int func_00a2ee70()
{
    return G2_func_00a2ee70(G1_func_00a2ee70());
}
