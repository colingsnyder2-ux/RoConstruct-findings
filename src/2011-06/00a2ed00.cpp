// roc 2011-06 00a2ed00  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed00
//
// 00a2ed00  e81b7bdeff           call 0x816820
// 00a2ed05  50                   push eax
// 00a2ed06  e813bdddff           call 0x80aa1e
// 00a2ed0b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ed00();
extern int __stdcall G2_func_00a2ed00(int);
int func_00a2ed00()
{
    return G2_func_00a2ed00(G1_func_00a2ed00());
}
