// roc 2011-06 00a2ed70  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed70
//
// 00a2ed70  e88b7fdfff           call 0x826d00
// 00a2ed75  50                   push eax
// 00a2ed76  e8a3bcddff           call 0x80aa1e
// 00a2ed7b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ed70();
extern int __stdcall G2_func_00a2ed70(int);
int func_00a2ed70()
{
    return G2_func_00a2ed70(G1_func_00a2ed70());
}
