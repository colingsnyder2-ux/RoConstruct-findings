// roc 2007-08 004cda70  unit: std::X::ZV?$allocator::$$A6AX_N::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cda70
//
// 004cda70  b854688900           mov eax, 0x896854
// 004cda75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004cda70()
{
    return &G;
}
