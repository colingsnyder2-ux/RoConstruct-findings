// roc 2007-08 00725830  unit: boost::thread_resource_error  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00725830
//
// 00725830  b86c517e00           mov eax, 0x7e516c
// 00725835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00725830()
{
    return &G;
}
