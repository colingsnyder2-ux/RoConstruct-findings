// roc 2008-06 0040a350  unit: boost::bad_any_cast  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a350
//
// 0040a350  b840ba8000           mov eax, 0x80ba40
// 0040a355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040a350()
{
    return &G;
}
