// from server: 100% by auto
// roc 2008-06 00555f60  unit: std::X::ZV?$allocator::$$A6AXMM::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555f60
//
// 00555f60  b8a4339400           mov eax, 0x9433a4
// 00555f65  c3                   ret 

extern char G;

char* func_00555f60()
{
    return &G;
}
