// roc 2010-06 007f9160  unit: CXTPControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9160
//
// 007f9160  b87ce8a500           mov eax, 0xa5e87c
// 007f9165  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f9160()
{
    return &G;
}
