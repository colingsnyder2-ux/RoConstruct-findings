// roc 2011-06 0083e640  unit: CInstanceRecord::CNameItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e640
//
// 0083e640  b81069c900           mov eax, 0xc96910
// 0083e645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0083e640()
{
    return &G;
}
