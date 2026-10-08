// roc 2007-08 00417120  unit: boost::X::U?$last_value::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417120
//
// 00417120  b86c378800           mov eax, 0x88376c
// 00417125  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00417120()
{
    return &G;
}
