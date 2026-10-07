// roc 2008-06 0072dd30  unit: CXTPControlGallery  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072dd30
//
// 0072dd30  b8b8929600           mov eax, 0x9692b8
// 0072dd35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0072dd30()
{
    return &G;
}
