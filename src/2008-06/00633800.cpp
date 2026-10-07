// roc 2008-06 00633800  unit: std::X::ZV?$allocator::$$A6AXH::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633800
//
// 00633800  b814e09500           mov eax, 0x95e014
// 00633805  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00633800()
{
    return &G;
}
