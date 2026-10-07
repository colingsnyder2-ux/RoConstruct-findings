// roc 2011-06 0043d490  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d490
//
// 0043d490  b88878a600           mov eax, 0xa67888
// 0043d495  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d490()
{
    return &G;
}
