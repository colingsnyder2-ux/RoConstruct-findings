// roc 2010-06 00860530  unit: CXTPDockingPaneWindowSelect  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00860530
//
// 00860530  b8f4ada600           mov eax, 0xa6adf4
// 00860535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00860530()
{
    return &G;
}
