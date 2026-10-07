// roc 2011-06 0043d300  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043d300
//
// 0043d300  b82477a600           mov eax, 0xa67724
// 0043d305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0043d300()
{
    return &G;
}
