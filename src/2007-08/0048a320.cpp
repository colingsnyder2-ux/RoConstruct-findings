// roc 2007-08 0048a320  unit: std::X::ZV?$allocator::$$A6AXM::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a320
//
// 0048a320  b8a8c58800           mov eax, 0x88c5a8
// 0048a325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048a320()
{
    return &G;
}
