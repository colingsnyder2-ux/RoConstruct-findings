// roc 2008-06 007064a0  unit: CXTColorDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007064a0
//
// 007064a0  b880bc8500           mov eax, 0x85bc80
// 007064a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007064a0()
{
    return &G;
}
