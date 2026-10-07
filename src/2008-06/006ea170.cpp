// roc 2008-06 006ea170  unit: CXTPCustomizeSheet  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ea170
//
// 006ea170  b888758500           mov eax, 0x857588
// 006ea175  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006ea170()
{
    return &G;
}
