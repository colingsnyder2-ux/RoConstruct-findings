// roc 2009-06 00705620  unit: boost::thread_resource_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705620
//
// 00705620  b858f88e00           mov eax, 0x8ef858
// 00705625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00705620()
{
    return &G;
}
