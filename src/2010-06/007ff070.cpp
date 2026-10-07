// roc 2010-06 007ff070  unit: CXTPPrintOptions  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ff070
//
// 007ff070  b828fca500           mov eax, 0xa5fc28
// 007ff075  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007ff070()
{
    return &G;
}
