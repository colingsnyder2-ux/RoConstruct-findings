// roc 2010-06 009d9620  unit: seg_009d0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009d9620
//
// 009d9620  e8cb5ee0ff           call 0x7df4f0
// 009d9625  50                   push eax
// 009d9626  e835eddcff           call 0x7a8360
// 009d962b  c3                   ret 
// auto-matched from its assembly shape

extern int G1_func_009d9620();
extern int __stdcall G2_func_009d9620(int);
int func_009d9620()
{
    return G2_func_009d9620(G1_func_009d9620());
}
