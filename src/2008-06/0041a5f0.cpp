// roc 2008-06 0041a5f0  unit: boost::X::U?$last_value::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a5f0
//
// 0041a5f0  b894cd9200           mov eax, 0x92cd94
// 0041a5f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0041a5f0()
{
    return &G;
}
