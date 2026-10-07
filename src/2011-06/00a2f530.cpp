// roc 2011-06 00a2f530  unit: seg_00a20000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f530
//
// 00a2f530  e86b4ae7ff           call 0x8a3fa0
// 00a2f535  50                   push eax
// 00a2f536  e8e3b4ddff           call 0x80aa1e
// 00a2f53b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_00a2f530();
extern int __stdcall G2_func_00a2f530(int);
int func_00a2f530()
{
    return G2_func_00a2f530(G1_func_00a2f530());
}
