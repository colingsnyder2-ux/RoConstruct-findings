// roc 2010-06 00409820  unit: boost::any::_N::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00409820
//
// 00409820  b83c93b700           mov eax, 0xb7933c
// 00409825  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00409820()
{
    return &G;
}
