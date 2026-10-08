// roc 2007-08 004adf30  unit: std::X::$$A6AXXZV?$allocator::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004adf30
//
// 004adf30  b858148900           mov eax, 0x891458
// 004adf35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004adf30()
{
    return &G;
}
