// roc 2010-06 007f9180  unit: CXTPOriginalControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9180
//
// 007f9180  b898e8a500           mov eax, 0xa5e898
// 007f9185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007f9180()
{
    return &G;
}
