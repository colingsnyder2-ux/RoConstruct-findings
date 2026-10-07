// roc 2009-06 0076a310  unit: CXTPOriginalControls  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076a310
//
// 0076a310  b830a18f00           mov eax, 0x8fa130
// 0076a315  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076a310()
{
    return &G;
}
