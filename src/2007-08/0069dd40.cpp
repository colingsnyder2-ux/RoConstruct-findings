// roc 2007-08 0069dd40  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dd40
//
// 0069dd40  b858247d00           mov eax, 0x7d2458
// 0069dd45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0069dd40()
{
    return &G;
}
