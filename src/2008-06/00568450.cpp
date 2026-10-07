// roc 2008-06 00568450  unit: boost::thread_resource_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568450
//
// 00568450  b810ef8200           mov eax, 0x82ef10
// 00568455  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00568450()
{
    return &G;
}
