// roc 2008-06 00633c00  unit: std::X::ZV?$allocator::$$A6AXN::V?$function::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633c00
//
// 00633c00  b8ace29500           mov eax, 0x95e2ac
// 00633c05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00633c00()
{
    return &G;
}
