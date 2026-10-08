// roc 2007-08 00413a90  unit: boost::any::H::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413a90
//
// 00413a90  b8d4278800           mov eax, 0x8827d4
// 00413a95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00413a90()
{
    return &G;
}
