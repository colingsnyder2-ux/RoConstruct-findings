// roc 2012-06 004492e0  unit: CNullDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004492e0
//
// 004492e0  b8c023b500           mov eax, 0xb523c0
// 004492e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004492e0()
{
    return &G;
}
