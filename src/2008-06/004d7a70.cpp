// roc 2008-06 004d7a70  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7a70
//
// 004d7a70  b87c0d9400           mov eax, 0x940d7c
// 004d7a75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004d7a70()
{
    return &G;
}
