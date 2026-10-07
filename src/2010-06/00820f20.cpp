// roc 2010-06 00820f20  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820f20
//
// 00820f20  b82444a600           mov eax, 0xa64424
// 00820f25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00820f20()
{
    return &G;
}
