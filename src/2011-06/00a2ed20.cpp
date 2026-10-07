// roc 2011-06 00a2ed20  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2ed20
//
// 00a2ed20  e82bbadeff           call 0x81a750
// 00a2ed25  50                   push eax
// 00a2ed26  e8f3bcddff           call 0x80aa1e
// 00a2ed2b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2ed20();
extern int __stdcall G2_func_00a2ed20(int);
int func_00a2ed20()
{
    return G2_func_00a2ed20(G1_func_00a2ed20());
}
