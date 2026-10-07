// roc 2008-06 00568420  unit: boost::lock_error  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568420
//
// 00568420  b8fcee8200           mov eax, 0x82eefc
// 00568425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00568420()
{
    return &G;
}
