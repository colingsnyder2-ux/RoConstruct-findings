// roc 2009-06 0072d050  unit: CXTPCommandBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d050
//
// 0072d050  b8d853a200           mov eax, 0xa253d8
// 0072d055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0072d050()
{
    return &G;
}
