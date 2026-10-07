// roc 2010-06 007fc830  unit: CXTPControlSelector  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fc830
//
// 007fc830  b8d07abe00           mov eax, 0xbe7ad0
// 007fc835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007fc830()
{
    return &G;
}
