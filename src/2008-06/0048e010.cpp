// roc 2008-06 0048e010  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e010
//
// 0048e010  b88c5c9300           mov eax, 0x935c8c
// 0048e015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048e010()
{
    return &G;
}
