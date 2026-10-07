// roc 2011-06 00a2f500  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f500
//
// 00a2f500  e89bc0e6ff           call 0x89b5a0
// 00a2f505  50                   push eax
// 00a2f506  e813b5ddff           call 0x80aa1e
// 00a2f50b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f500();
extern int __stdcall G2_func_00a2f500(int);
int func_00a2f500()
{
    return G2_func_00a2f500(G1_func_00a2f500());
}
