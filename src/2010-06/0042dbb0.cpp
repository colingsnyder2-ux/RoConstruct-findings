// roc 2010-06 0042dbb0  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042dbb0
//
// 0042dbb0  b8c05ea000           mov eax, 0xa05ec0
// 0042dbb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042dbb0()
{
    return &G;
}
