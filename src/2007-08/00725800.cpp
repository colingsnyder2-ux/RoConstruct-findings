// roc 2007-08 00725800  unit: boost::lock_error  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00725800
//
// 00725800  b858517e00           mov eax, 0x7e5158
// 00725805  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00725800()
{
    return &G;
}
