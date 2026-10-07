// roc 2010-06 0040f620  unit: boost::bad_weak_ptr  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040f620
//
// 0040f620  b80424a000           mov eax, 0xa02404
// 0040f625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040f620()
{
    return &G;
}
