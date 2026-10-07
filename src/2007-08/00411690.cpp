// roc 2007-08 00411690  unit: boost::bad_any_cast  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00411690
//
// 00411690  b8106e7800           mov eax, 0x786e10
// 00411695  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00411690()
{
    return &G;
}
