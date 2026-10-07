// roc 2010-06 00813b70  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813b70
//
// 00813b70  b8641fa600           mov eax, 0xa61f64
// 00813b75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00813b70()
{
    return &G;
}
