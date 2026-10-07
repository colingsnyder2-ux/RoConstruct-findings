// roc 2011-06 00a2ee50  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ee50
//
// 00a2ee50  e8cb1ae1ff           call 0x840920
// 00a2ee55  50                   push eax
// 00a2ee56  e8c3bbddff           call 0x80aa1e
// 00a2ee5b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ee50();
extern int __stdcall G2_func_00a2ee50(int);
int func_00a2ee50()
{
    return G2_func_00a2ee50(G1_func_00a2ee50());
}
