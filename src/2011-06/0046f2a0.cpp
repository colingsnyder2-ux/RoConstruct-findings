// roc 2011-06 0046f2a0  unit: CRobloxDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046f2a0
//
// 0046f2a0  b8ccfda600           mov eax, 0xa6fdcc
// 0046f2a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0046f2a0()
{
    return &G;
}
