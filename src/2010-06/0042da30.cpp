// roc 2010-06 0042da30  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042da30
//
// 0042da30  b8585da000           mov eax, 0xa05d58
// 0042da35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042da30()
{
    return &G;
}
