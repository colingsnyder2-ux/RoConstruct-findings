// roc 2008-06 004b19a0  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b19a0
//
// 004b19a0  b854b59300           mov eax, 0x93b554
// 004b19a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b19a0()
{
    return &G;
}
